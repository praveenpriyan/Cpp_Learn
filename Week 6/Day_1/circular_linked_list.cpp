#include <iostream>
using namespace std;

// Node structure for Circular Linked List
struct CircularNode {
    int data;
    CircularNode* next;
};

// Node structure for Circular Doubly Linked List
struct CircularDoubleNode {
    int data;
    CircularDoubleNode* prev;
    CircularDoubleNode* next;
};

// Function to insert a node at the end of a Circular Linked List
void insertAtEndCircularLinkedList(CircularNode** head, int data) {
    CircularNode* newNode = new CircularNode;
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        newNode->next = *head;
    } else {
        CircularNode* current = *head;
        while (current->next != *head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = *head;
    }
}

// Function to insert a node at the end of a Circular Doubly Linked List
void insertAtEndCircularDoubleLinkedList(CircularDoubleNode** head, int data) {
    CircularDoubleNode* newNode = new CircularDoubleNode;
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        newNode->next = *head;
        newNode->prev = *head;
    } else {
        CircularDoubleNode* current = *head;
        while (current->next != *head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
        newNode->next = *head;
        (*head)->prev = newNode;
    }
}

// Function to print nodes in a Circular Linked List
void printCircularLinkedList(CircularNode* head) {
    if (head == nullptr) {
        cout << "Circular Linked List is empty." << endl;
        return;
    }

    CircularNode* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

// Function to print nodes in a Circular Doubly Linked List
void printCircularDoubleLinkedList(CircularDoubleNode* head) {
    if (head == nullptr) {
        cout << "Circular Doubly Linked List is empty." << endl;
        return;
    }

    CircularDoubleNode* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

int main() {
    // Circular Linked List
    CircularNode* circularHead = nullptr;
    insertAtEndCircularLinkedList(&circularHead, 1);
    insertAtEndCircularLinkedList(&circularHead, 2);
    insertAtEndCircularLinkedList(&circularHead, 3);
    insertAtEndCircularLinkedList(&circularHead, 4);
    cout << "Circular Linked List: ";
    printCircularLinkedList(circularHead);

    // Circular Doubly Linked List
    CircularDoubleNode* circularDoubleHead = nullptr;
    insertAtEndCircularDoubleLinkedList(&circularDoubleHead, 10);
    insertAtEndCircularDoubleLinkedList(&circularDoubleHead, 20);
    insertAtEndCircularDoubleLinkedList(&circularDoubleHead, 30);
    insertAtEndCircularDoubleLinkedList(&circularDoubleHead, 40);
    cout << "Circular Doubly Linked List: ";
    printCircularDoubleLinkedList(circularDoubleHead);

    return 0;
}