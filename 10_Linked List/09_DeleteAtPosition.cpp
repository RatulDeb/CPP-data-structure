#include <iostream>
using namespace std;

/*
    Deleting a Node at Any Position in a Singly Linked List
    Position starts from 1.
    Example:
        List: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
        deleteAtPosition(3)
        New List: 10 -> 20 -> 40 -> 50 -> NULL
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
void deleteAtPosition(int pos);
void print();

int main()
{
    // Inserting elements: 10 -> 20 -> 30 -> 40 -> 50
    insertAtTail(10);
    insertAtTail(20);
    insertAtTail(30);
    insertAtTail(40);
    insertAtTail(50);

    cout << "Original List:" << endl;
    print();

    // Case 1: Delete middle node at position 3 (value 30)
    cout << "\nDeleting node at position 3:" << endl;
    deleteAtPosition(3);
    print();

    // Case 2: Delete head at position 1 (value 10)
    cout << "\nDeleting node at position 1 (head):" << endl;
    deleteAtPosition(1);
    print();

    // Case 3: Delete tail at position 3 (value 50)
    cout << "\nDeleting node at position 3 (tail):" << endl;
    deleteAtPosition(3);
    print();

    // Case 4: Invalid positions
    cout << "\nTrying to delete at invalid position 10:" << endl;
    deleteAtPosition(10);

    return 0;
}

void deleteHead()
{
    if (head == nullptr)
    {
        cout << "List is already empty." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    if (head == nullptr)
    {
        tail = nullptr;
    }
}

// Function to delete a node at any 1-based position
void deleteAtPosition(int pos)
{
    // 1. If list is empty
    if (head == nullptr)
    {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    // 2. If position is less than 1
    if (pos < 1)
    {
        cout << "Invalid position." << endl;
        return;
    }

    // 3. If deleting position 1 (head)
    if (pos == 1)
    {
        deleteHead();
        return;
    }

    // 4. Traverse to node just BEFORE the position to delete (pos - 1)
    Node* current = head;
    for (int i = 1; i < pos - 1 && current != nullptr; i++)
    {
        current = current->next;
    }

    // If pos is beyond the length of list
    if (current == nullptr || current->next == nullptr)
    {
        cout << "Position is outside the list." << endl;
        return;
    }

    // 5. temp is the node we want to delete
    Node* temp = current->next;

    // Link current directly to the node after temp
    current->next = temp->next;

    // If the node we deleted was the tail, update tail pointer to current
    if (temp == tail)
    {
        tail = current;
    }

    // Free memory
    delete temp;
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
