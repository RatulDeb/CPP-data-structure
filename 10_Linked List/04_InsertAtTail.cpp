#include<iostream>
using namespace std;

void insertAtTail( int x);

struct Node
{
    int data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

int main()
{
    head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    tail = new Node;

    head->data = 10;
    second->data = 20;
    third->data = 30;
    tail->data = 40;

    head->next = second;
    second->next = third;
    third->next = tail;
    tail->next = nullptr;

    insertAtTail(50);

    Node* current = head;

    while(current != nullptr)
    {
        cout<< current->data << endl;
        current = current->next;
    }

    return 0;
}

void insertAtTail(int x)
{
    Node* temp = new Node;

    temp->data = x;
    temp->next = nullptr;

    if(head == nullptr)
    {
        head = tail = temp;
    }
    else 
    {
        tail->next = temp;
        tail = temp;
    }
   
}