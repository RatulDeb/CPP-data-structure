#include <iostream>
using namespace std;

#define SIZE 5
int q[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue is full\n";
    } else {
        if (front == -1)
            front = 0;

        rear = (rear + 1) % SIZE;
        q[rear] = x;
        cout << x << " inserted\n";
    }
}

void dequeue() {
    if (front == -1) {
        cout << "Queue is empty\n";
    } else {
        cout << q[front] << " removed\n";

        if (front == rear)
            front = rear = -1;
         else
            front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }
    else {
        int i = front;
    while (true) {
        cout << q[i] << " ";

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }
    cout << endl;
    }
}

int main() {
    enqueue(10);  enqueue(20);  enqueue(30);  enqueue(40);  enqueue(50);
    display();
    enqueue(60);
    dequeue();
    enqueue(60);   display();

    return 0;
}
