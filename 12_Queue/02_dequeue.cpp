#include<bits/stdc++.h>
using namespace std;

const int SIZE = 5;
int q[SIZE];

int front = -1, rear = -1;

void enqueue(int x)
{
    if((rear+1)%SIZE == front)
    {
        cout<<endl<<"Queue is Full"<<endl;
    }

    else
    {
        if(front == -1)
        {
            front = 0;
        }

        rear = (rear+1)%SIZE;
        q[rear] = x;
        cout<<x<<" Inserted\n";
    }
}

void dequeue()
{
    if(front == -1)
    {
        cout<<endl<<"Queue is Empty"<<endl;
        return;
    }
    else
    {
        cout<<q[front]<<" is removed."<<endl;

        if(front==rear)
           front = rear = -1;
        else
           front = (front+1)%SIZE;
    }
}


void traverse()
{

    if(front ==-1)
    {
        cout<<endl<<"Queue is empty"<<endl;
        return;
    }

    int i = front;
    while(true)
    {
        cout<<q[i]<<" ";
        if(i== rear)
            break;
        i= (i+1)%SIZE;

    }
    cout<<endl;
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


    traverse();

    enqueue(15);
    traverse();
    
    cout<<endl<<"Keya Itna bura hu mein MAA.";
    return 0;
}
