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
        cout<<current->data;
        current = current->next;
    }
}

void deletehead()
{
    if(head == NULL)
    {
        cout<<"The list is already empty;";
        return;
    }

    Node* temp = head ;
    head = head->next;
    delete head;

    if(head == NULL)
    {
        tail = NULL;
    }
}

void deletetail()
{
    if(head == NULL)
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

    Node* current = head;
    while(current->next != tail )
    {
        current = current->next;
    }

    delete tail;
    current->next = NULL;
    tail = current;
}

void deleteanypos(int pos)
{
    if(head == NULL)
    {
        cout<<"the lis is already eampty";
        return;
    }
    if(pos<1)
    {
        cout<<"Invalid Position";
        return;
    }
    if(head = tail)
    {
        deletehead();
        return;
    }

    Node* current = head;
    for(int i=2; i<pos; i++)
    {
        current = current->next;
    }

    Node* temp = current->next;
    current->next = temp->next;
    
    if(temp = tail)
    {
        tail = current;
    }

    delete temp;
}