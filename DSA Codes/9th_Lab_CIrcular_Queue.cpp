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
        return ((rear + 1) % N == front);
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
        rear = (rear + 1) % N;
        arr[rear] = n;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue already Empty" << endl;
            return;
        }

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % N;
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

        int i = front;
        while (1)
        {
            cout << arr[i] << " ";
            if (i == rear)
            {
                break;
            }
            i = (i + 1) % N;
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
    q.dequeue();

    q.enqueue(30);
    q.display();

    return 0;
}