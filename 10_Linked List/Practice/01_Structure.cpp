#include<bits/stdc++.h>
using namespace std;

void print();
struct Node
    {
        int data;
        Node* next; 
    };

Node* head = new Node;
Node* tail = new Node;


int main()
{
//    Node* head = new Node;
   Node* second = new Node;
  
   
   head->data = 10;
   head->next = second;

   second->data = 20;
   second->next = tail;

   tail->data = 30;
   tail->next = NULL;

   print();
   return 0;

}

void print()
{
    Node* current = head;

    while( current != nullptr )
    {
        cout<< current->data;

        if (current->next != NULL)
            cout << " -> ";
            
        current = current->next;
    }
}