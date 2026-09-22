#include<iostream>
using namespace std;

void print();
void insertAtAnyPos(int pos, int value);
void insertAtHead(int x);
void insertAtTail(int x);

struct Node
{
   int data;
   Node* next;
};

// Declearing the variable Golbally so that any function can acess it.
Node* head = nullptr;
Node* tail = nullptr;

int main()
{
    insertAtTail(10);
    insertAtTail(20);
    insertAtTail(30);
    insertAtTail(40);

    insertAtHead(87);
    insertAtHead(56);
    insertAtHead(69);
    insertAtHead(20);
    insertAtHead(51);

    insertAtAnyPos(4,17);

    print();
   
    return 0;
}

void insertAtAnyPos(int pos, int value){
    Node* temp = new Node;
    temp->data = value;
    temp->next = nullptr;

    if( head == nullptr){
        head = tail = temp;
    } if(pos == 1) {
        insertAtHead(value);
        return;
    }

    Node* current = head;
    for(int i=2; i<pos; i++) {
        current = current->next;
    }

    temp->next = current->next;
    current->next = temp;
}

void insertAtHead(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = head;

    if( head == nullptr) {
        head = tail = temp;
    } else {
        head = temp;
    }
}

void insertAtTail(int x) {   
    Node* temp = new Node;
    temp->data = x;
    temp->next = nullptr;

    if( head == nullptr) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void print() {
    Node* current = head;

    while( current != nullptr) {
        cout<< current->data << endl;
        current = current->next;
    }
}
