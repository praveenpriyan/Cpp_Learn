#include <iostream>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <cstring>

// Define message queue structure
struct message_buffer {
    long message_type;
    char message_text[100];
};

int main() {
    key_t key;
    int message_id;
    message_buffer message;

    // Generate a unique key using ftok
    key = ftok("progfile", 65);

    // Get the message queue ID
    message_id = msgget(key, 0666 | IPC_CREAT);
    if (message_id == -1) {
        std::cerr << "Error in accessing message queue" << std::endl;
        return 1;
    }

    // Receive the message from the queue
    if (msgrcv(message_id, &message, sizeof(message.message_text), 1, 0) == -1) {
        std::cerr << "Error in receiving message" << std::endl;
        return 1;
    }

    // Display the received message
    std::cout << "Received message: " << message.message_text << std::endl;

    // Destroy the message queue
    if (msgctl(message_id, IPC_RMID, NULL) == -1) {
        std::cerr << "Error in destroying message queue" << std::endl;
        return 1;
    }

    return 0;
}
