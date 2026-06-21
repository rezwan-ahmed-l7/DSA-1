#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *arr;
    int N;
    int front = -1;
    int rear = -1;

    void setQueue(int size)
    {
        N = size;
        arr = new int[N];
    }

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
    cout << "Enter Size: ";
    int size;
    cin >> size;

    Queue q;
    q.setQueue(size);

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);

    q.display();
    q.dequeue();

    return 0;
}