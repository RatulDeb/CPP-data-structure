#include<iostream>
using namespace std;

/*
    Insert a node at any position in a singly linked list.

    Position starts from 1.
    Example:
        List: 10 -> 20 -> 30 -> NULL
        insertAtPosition(2, 15)
        New List: 10 -> 15 -> 20 -> 30 -> NULL
*/

struct Node
{
    int data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void insertAtTail(int value);
void insertAtPosition(int position, int value);
void printList();

int main()
{
    insertAtTail(10);
    insertAtTail(20);
    insertAtTail(30);
    insertAtTail(40);

    cout << "Before inserting:" << endl;
    printList();

    insertAtPosition(1, 5);   // Insert at the beginning
    insertAtPosition(3, 15);  // Insert in the middle
    insertAtPosition(7, 50);  // Insert at the end

    cout << "After inserting:" << endl;
    printList();

    return 0;
}

void insertAtPosition(int position, int value)
{
    if(position < 1)
    {
        cout << "Invalid position." << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    // If the list is empty or the node should be inserted at position 1.
    if(position == 1)
    {
        newNode->next = head;
        head = newNode;

        if(tail == nullptr)
        {
            tail = newNode;
        }

        return;
    }

    Node* current = head;

    // Move current to the node just before the required position.
    for(int i = 1; i < position - 1 && current != nullptr; i++)
    {
        current = current->next;
    }

    if(current == nullptr)
    {
        cout << "Position is outside the list." << endl;
        delete newNode;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;

    if(newNode->next == nullptr)
    {
        tail = newNode;
    }
}

void insertAtTail(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if(head == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void printList()
{
    Node* current = head;

    while(current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}
