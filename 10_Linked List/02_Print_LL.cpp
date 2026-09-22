#include<iostream>
using namespace std;

void print();

struct Node
{
   int data;
   Node* next;
};

Node* head = nullptr;

int main()
{
    head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* tail = new Node;

    head->data = 10;
    second->data = 20;
    third->data = 30;
    tail->data = 40;

    head->next = second;
    second->next = third;
    third->next = tail;
    tail->next = nullptr;

    print();

/* We can use code directly from the main function to print the values of all node
   Or we can use the print function */

    // Node* current = head;

    // while( current != nullptr )
    // {
    //    cout<< current->data << endl;
    //    current = current->next;
    // }
  
}

// Function to print all nodes of the linked list starting from head

void print()
{
    Node* current = head;

    while( current != nullptr )
    {
        cout<< current->data << endl;
        current = current->next;
    }
}