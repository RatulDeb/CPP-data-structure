// Linked List structure example
#include<iostream>
using namespace std;

struct Node
{
   int data;
   Node* next;
};

int main()
{
    Node* head = new Node;
    Node* second = new Node;
    Node* tail = new Node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = tail;

    tail->data = 30;
    tail->next = nullptr;

    return 0;
}