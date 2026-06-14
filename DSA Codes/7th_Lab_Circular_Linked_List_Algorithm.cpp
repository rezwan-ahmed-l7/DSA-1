#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int k)
    {
        val = k;
        next = nullptr;
    }
};

class List
{
public:
    Node *start = nullptr;

    void insFirst(int k)
    {
        Node *n = new Node(k);
        if (start == nullptr)
        {
            start = n;
            n->next = start;
            return;
        }
        else
        {
            Node *temp = start;
            while (temp->next != start)
            {
                temp = temp->next;
            }
            n->next = start;
            temp->next = n;
            start = n;
        }
    }

    void insLast(int k)
    {
        Node *n = new Node(k);
        if (start == nullptr)
        {
            start = n;
            n->next = start;
            return;
        }

        Node *temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = start;
    }

    void deleteFirst()
    {
        Node *temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        start = start->next;
        temp->next = start;
    }

    void deleteLast()
    {
        Node *temp = start;
        while (temp->next->next != start)
        {
            temp = temp->next;
        }
        temp->next = start;
    }
    void traverse()
    {
        Node *temp = start;
        while (temp->next != start)
        {
            cout << temp->val << "\t";
            temp = temp->next;
        }
        cout << temp->val << endl;
    }
};

int main()
{
    List l;
    l.insFirst(2);
    l.insFirst(4);
    l.insFirst(1);
    l.traverse();

    l.insLast(3);
    l.insLast(5);
    l.insLast(9);
    l.traverse();

    l.deleteFirst();
    l.traverse();

    l.deleteLast();
    l.traverse();

    return 0;
}