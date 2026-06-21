#include <bits/stdc++.h>
using namespace std;

#define N 5

class Queue
{
public:
    int arr[N];
    int front = -1;
    int rear = -1;

    bool isFull()
    {
        return (rear == N - 1);
    }

    bool isEmpty()
    {
        return (front == -1);
    }

    void enqueue(int n)
    {
        if (isFull())
        {
            cout << "Queue Full" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = n;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Empty" << endl;
            return;
        }

        front = front + 1;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    q.display();

    return 0;
}