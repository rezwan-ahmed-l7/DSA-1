#include <bits/stdc++.h>
using namespace std;

int stackPush(int top, int mx, int A[])
{
    int k;
    cin >> k;

    if (top == mx - 1)
    {
        cout << "Stack Full" << endl;
    }
    else
    {
        top = top + 1;
        A[top] = k;
    }
    return top;
}

void stackPeek(int top, int A[])
{
    if (top == -1)
    {
        cout << "Stack Empty" << endl;
    }
    else
    {
        cout << "Stack Top: " << A[top] << endl;
    }
}

int stackPop(int top, int A[])
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        top = top - 1;
    }
    return top;
}

int main()
{
    int size;
    cout << "Enter Size: ";
    cin >> size;
    cout << "Enter Numbers: ";

    int st[size];
    int top = -1;

    top = stackPush(top, size, st);
    top = stackPush(top, size, st);
    top = stackPush(top, size, st);
    top = stackPush(top, size, st);
    top = stackPush(top, size, st);

    stackPeek(top, st);

    top = stackPop(top, st);
    top = stackPop(top, st);
    top = stackPop(top, st);

    stackPeek(top, st);

    return 0;
}