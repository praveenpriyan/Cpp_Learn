#include<iostream>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<cstring>
using namespace std;

struct message_buffer{
    long message_type;
    char message_text[100];
};

int main()
{
    key_t key;
    int message_id;
    message_buffer message;

    key=ftok("progfile",65);

    message_id=msgget(key,0666|IPC_CREAT);
    if(message_id==-1){
        cerr<<"Error in creating message queue"<<endl;
        return 1;
    }

    cout<<"Enter message: ";
    cin.getline(message.message_text,100);
    message.message_type=1;

    if(msgsnd(message_id,&message, sizeof(message.message_text),0)==-1){
        cerr<<"Error in Sending message: "<<endl;
        return 1;
    }

    cout<<"Message sent: "<<message.message_text<<endl;
    return 0;
}