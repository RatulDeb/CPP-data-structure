#include <iostream>
using namespace std;

/*
    Deleting the Tail Node in a Singly Linked List
    Example:
        List: 10 -> 20 -> 30 -> 40 -> NULL
        deleteTail()
        New List: 10 -> 20 -> 30 -> NULL
*/

struct Node
{
    int data;
    Node* next;
};

// Declaring head and tail globally
Node* head = nullptr;
Node* tail = nullptr;

void insertAtTail(int value);
void deleteTail();
void print();

int main()
{
    // Inserting elements: 10 -> 20 -> 30 -> 40
    insertAtTail(10);
    insertAtTail(20);
    insertAtTail(30);
    insertAtTail(40);

    cout << "Original List:" << endl;
    print();

    cout << "\nDeleting tail..." << endl;
    deleteTail();
    print();

    cout << "\nDeleting tail again..." << endl;
    deleteTail();
    print();

    return 0;
}

// Function to delete the last node (tail)
void deleteTail()
{
    // 1. If list is empty
    if (head == nullptr)
    {
        cout << "List is already empty." << endl;
        return;
    }

    // 2. If there is only one node in the list
    if (head == tail)
    {
        delete head;
        head = tail = nullptr;
        return;
    }

    // 3. If there are multiple nodes:
    // Traverse until current points to the node just BEFORE tail
    Node* current = head;
    while (current->next != tail)
    {
        current = current->next;
    }

    // Delete the tail node
    delete tail;

    // Update tail to be current and mark its next as nullptr
    tail = current;
    tail->next = nullptr;
}

void insertAtTail(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void print()
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}
