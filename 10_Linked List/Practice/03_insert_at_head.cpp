#include<bits\stdc++.h>
using namespace std;

void print();
int InsertAtHead(int x);

struct Node
{
    int data;
    Node * next;
};

Node * head = NULL;
Node * tail = NULL;

int main()
{
    head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    tail = new Node;

    head->data = 30;
    second->data = 40;
    third->data = 50;
    tail->data = 60;

    head->next = second;
    second->next = third;
    third->next = tail;
    tail->next = NULL;

    cout<<"Before inserting any data: ";
    print();

    cout<<endl<<endl<<"After inserting 20 at head: ";
    InsertAtHead(20);
    print();

    cout<<endl<<endl<<"After inserting 10 at head: ";
    InsertAtHead(10);
    print();
    
   return 0;
}

void print()
{
    Node* current = head;

    while(current != NULL)
    {
        cout<<current->data;

        if(current->next != NULL)
        {
            cout<<" -> ";
        }

        current = current->next;
    }
}

int InsertAtHead(int x)
{
    Node* temp = new Node;

    temp->data = x;
    temp->next = head;

    if(head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        head = temp;
    }

    return 0;
}