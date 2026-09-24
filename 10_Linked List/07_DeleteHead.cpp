#include <iostream>
using namespace std;

/*
    Deleting the Head Node in a Singly Linked List
    Example:
        List: 10 -> 20 -> 30 -> 40 -> NULL
        deleteHead()
        New List: 20 -> 30 -> 40 -> NULL
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
void deleteHead();
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

    cout << "\nDeleting head..." << endl;
    deleteHead();
    print();

    cout << "\nDeleting head again..." << endl;
    deleteHead();
    print();

    return 0;
}

// Function to delete the first node (head)
void deleteHead()
{
    // 1. If list is already empty
    if (head == nullptr)
    {
        cout << "List is already empty." << endl;
        return;
    }

    // 2. Temporarily store current head to free its memory later
    Node* temp = head;

    // 3. Move head pointer to the next node
    head = head->next;

    // 4. Free the old head from memory
    delete temp;

    // 5. If list became empty after deletion, update tail as well
    if (head == nullptr)
    {
        tail = nullptr;
    }
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
