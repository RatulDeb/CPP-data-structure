#include<iostream>
using namespace std;

void insertAtHead(int x);

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
    head = new Node;
    Node* second = new Node;
    tail = new Node;

    head->data = 20;
    second->data = 30;
    tail->data = 40;

    head->next = second;
    second->next = tail;
    tail->next = nullptr;

    insertAtHead(10);
    insertAtHead(5);

    Node* current = head;

    while( current != nullptr)
    {
        cout<< current->data << endl;
        current = current->next;
    }
   
    return 0;
}

void insertAtHead( int x)
{
    Node* temp = new Node;

    temp->data = x;
    temp->next = head;

    if( head == nullptr)
    {
        head = tail = temp;
    }
    else
    {
        head = temp;
    }
}