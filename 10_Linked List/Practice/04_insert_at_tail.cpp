#include<bits\stdc++.h>
using namespace std;

void print();
int InsertAtTail(int x);

struct Node
{
   int data;
   Node* next;
};

Node * head = NULL;
Node * tail = NULL;

int main()
{
   head = new Node;
   Node * second = new Node;
   tail = new Node;

   head->data = 10;
   second->data = 20;
   tail->data = 30;

   head->next = second;
   second->next = tail;
   tail->next = NULL;

   cout<<"Before inserting any tail: ";
   print();

   cout<<endl<<endl<<"After inserting 40 at tail: ";
   InsertAtTail(40);
   print();

   cout<<endl<<endl<<"After inserting 50 at tail: ";
   InsertAtTail(50);
   print();

   
   
}

void print()
{
    Node * current = head;

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

int InsertAtTail(int x)
{
    Node * temp = new Node;

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

    return 0;
}