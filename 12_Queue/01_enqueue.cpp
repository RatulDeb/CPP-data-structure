#include<bits/stdc++.h>
using namespace std;

const int SIZE = 5;
int q[SIZE];

int front = -1, rear = -1;

void enqueue(int x)
{
    if(rear == SIZE-1)
    {
        cout<<"Queue is Full\n";
        return;
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }

        rear++;
        q[rear] = x;
        cout<<x<<" Inserted\n";
    }
}

void dequeue()
{
    if(front == -1 || front >rear)
    {
        cout<<endl<<"Queue is Empty"<<endl;
        return;
    }
    else
    {
        cout<<q[front]<<" is removed."<<endl;
        front++;

        if(front>rear)
        {
            front = rear = -1;
        }
    }
}


void traverse()
{

    if(front ==-1)
        cout<<endl<<"Queue is empty"<<endl;
    else
    {
        for(int i=front; i<=rear; i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);

    traverse();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    traverse();

    enqueue(66);
    traverse();

    cout<<endl<<"Keya Itna bura hu mein MAA.";
    return 0;
}