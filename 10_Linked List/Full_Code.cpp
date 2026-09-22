// Full linked list code example
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node*next;
};

Node*head=NULL;
Node*tail=NULL;

void insertAtHead(int x)
{
    Node*temp = new Node;
    temp->data = x;
    temp->next = NULL;

    if(head == NULL)
    {
        head=tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
    
}

void insertAtTail( int value)
{
    Node*temp = new Node;
    temp->data = value;
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


// Print List

void print()
{
    Node*temp = head;

    while(temp!=NULL)
    {
        cout<< temp->data << "->";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

int main()
{
    insertAtTail(10);
    insertAtTail(20);
    insertAtTail(30);
    insertAtTail(40);

    insertAtHead(87);
    insertAtHead(56);
    insertAtHead(69);
    insertAtHead(20);
    insertAtHead(51);



    print();

}