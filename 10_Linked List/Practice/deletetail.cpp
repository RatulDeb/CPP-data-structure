#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

void print()
{
    Node* current = head;
    while(current != NULL)
    {
        cout<<current->data<<" ";
        current= current->next;
    }
}

void insertathead(int x)
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

void insertstanypos(int pos , int value)
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

    Node* current = head ;
    for(int i=2; i<pos; i++)
    {
        current = current->next;
    }

    temp->next = current->next;
    current->next = temp;
}

void deletehead()
{
    if(head == NULL)
    {
        cout<<"The list is already empty";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete head;

    if(head == NULL)
    {
        tail = NULL;
    }
}

void deletetail()
{
    if(head = NULL)
    {
        cout<<"The list is already empty";
        return;
    }

    if(head == tail)
    {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* current = head ;
    while(current->next != tail)
    {
        current = current->next;
    }

    delete tail;
    tail = current;
    current->next = NULL;
}