#include <iostream>
using namespace std;

/*
    Complete Singly Linked List Implementation:
    - Insert at Head
    - Insert at Tail
    - Insert at Any Position
    - Delete Head
    - Delete Tail
    - Delete at Any Position
    - Print List
*/

struct Node
{
    int data;
    Node* next;
};

// Global head and tail pointers
Node* head = nullptr;
Node* tail = nullptr;

// Function Prototypes
void insertAtHead(int value);
void insertAtTail(int value);
void insertAtPosition(int pos, int value);

void deleteHead();
void deleteTail();
void deleteAtPosition(int pos);

void printList();

int main()
{
    cout << "--- Inserting Elements ---" << endl;
    insertAtTail(20);
    insertAtTail(30);
    insertAtTail(40);
    insertAtHead(10);
    insertAtPosition(3, 25); // Insert 25 at position 3

    // List: 10 -> 20 -> 25 -> 30 -> 40 -> NULL
    printList();

    cout << "\n--- Delete Operations ---" << endl;

    // 1. Delete Head
    cout << "\n1. After deleteHead():" << endl;
    deleteHead();
    printList();

    // 2. Delete Tail
    cout << "\n2. After deleteTail():" << endl;
    deleteTail();
    printList();

    // 3. Delete at Any Position (delete position 2)
    cout << "\n3. After deleteAtPosition(2):" << endl;
    deleteAtPosition(2);
    printList();

    return 0;
}

// ----------------- INSERTION FUNCTIONS -----------------

void insertAtHead(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;

    if (head == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        head = newNode;
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

void insertAtPosition(int pos, int value)
{
    if (pos < 1)
    {
        cout << "Invalid position." << endl;
        return;
    }

    if (pos == 1)
    {
        insertAtHead(value);
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    Node* current = head;
    for (int i = 1; i < pos - 1 && current != nullptr; i++)
    {
        current = current->next;
    }

    if (current == nullptr)
    {
        cout << "Position is outside the list." << endl;
        delete newNode;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;

    if (newNode->next == nullptr)
    {
        tail = newNode;
    }
}

// ----------------- DELETION FUNCTIONS -----------------

// 1. Delete Head
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

// 2. Delete Tail
void deleteTail()
{
    if (head == nullptr)
    {
        cout << "List is already empty." << endl;
        return;
    }

    if (head == tail)
    {
        delete head;
        head = tail = nullptr;
        return;
    }

    Node* current = head;
    while (current->next != tail)
    {
        current = current->next;
    }

    delete tail;
    tail = current;
    tail->next = nullptr;
}

// 3. Delete at Any Position
void deleteAtPosition(int pos)
{
    if (head == nullptr)
    {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    if (pos < 1)
    {
        cout << "Invalid position." << endl;
        return;
    }

    if (pos == 1)
    {
        deleteHead();
        return;
    }

    Node* current = head;
    for (int i = 1; i < pos - 1 && current != nullptr; i++)
    {
        current = current->next;
    }

    if (current == nullptr || current->next == nullptr)
    {
        cout << "Position is outside the list." << endl;
        return;
    }

    Node* temp = current->next;
    current->next = temp->next;

    if (temp == tail)
    {
        tail = current;
    }

    delete temp;
}

// ----------------- PRINT FUNCTION -----------------

void printList()
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}
