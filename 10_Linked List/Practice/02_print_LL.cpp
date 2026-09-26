#include<bits/stdc++.h>
using namespace std;

void print();

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

int main()
{
   head = new Node;
   Node * second = new Node;
   Node * third = new Node;
   Node * tail = new Node;

   head->data = 10;
   second->data = 20;
   third->data = 30;
   tail->data = 40;

   head->next = second;
   second->next = third;
   third->next = tail;
   tail->next = NULL;

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
            cout<<"->";
        }

        current = current->next;
    }
}