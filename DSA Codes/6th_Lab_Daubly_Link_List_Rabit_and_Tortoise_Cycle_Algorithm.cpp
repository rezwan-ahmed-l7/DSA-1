#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int k)
    {
        val = k;
        next = nullptr;
        prev = nullptr;
    }
};

class List
{
public:
    Node *start = nullptr;

    void traverse()
    {
        Node *p = start;
        while (p->next != nullptr)
        {
            cout << p->val << "\t";
            p = p->next;
        }
        cout << p->val << "\t";
        cout << endl;

        while (p != nullptr)
        {
            cout << p->val << "\t";
            p = p->next;
        }
        cout << endl;
    }

    void insFirst(int k)
    {
        Node *n = new Node(k);
        if (start == nullptr)
        {
            start = n;
        }
        else
        {
            n->next = start;
            start->prev = n;
            start = n;
        }
    }

    void insLast(int k)
    {
        Node *n = new Node(k);
        if (start == nullptr)
        {
            start = n;
        }
        else
        {
            Node *p = start;
            while (p->next != nullptr)
            {
                p = p->next;
            }
            p->next = n;
            n->prev = p;
        }
    }

    void deleteFirst()
    {
        start = start->next;
        start->prev = nullptr;
    }

    void deleteLast()
    {
        Node *j = start;
        while (j->next->next != nullptr)
        {
            j = j->next;
        }
        j->next = nullptr;
    }
};

int main()
{
    List t;
    t.insLast(5);
    t.insLast(10);
    t.insLast(3);
    t.insLast(6);
    t.traverse();
    t.insFirst(9);
    t.traverse();

    t.deleteFirst();
    t.traverse();

    t.deleteLast();
    t.traverse();

    return 0;
}