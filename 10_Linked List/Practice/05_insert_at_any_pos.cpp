#include<bits\stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
};

Node* head = NULL;
Node* tail = NULL;


void print()
{
    Node* current = head;

    while(current != NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
}

void insertathead(int x)
{
    Node* temp = new Node;
    temp->data = x;
    temp->next = head;

    if( head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        head = temp;
    }
}

void insertattail(int x)
{
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;

    if(head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void insertatanypos(int pos, int value)
{
    Node* temp = new Node;
    temp->data = value;
    temp->next = NULL;

    if(head == NULL)
    {
        head = tail = temp;
    }
    if(pos == 1)
    {
        insertathead(value);
        return;
    }

    Node* current = head;
    for(int i=2; i<pos; i++)
    {
        current = current->next;
    }

    temp->next = current->next;
    current->next = temp;
}

int main()
{
    insertathead(5);
    insertathead(4);
    insertathead(2);
    insertathead(1);

    insertattail(6);
    insertattail(7);
    insertattail(9);
    insertattail(10);

    insertatanypos(3,3);
    insertatanypos(8,8);

    print();
    
}