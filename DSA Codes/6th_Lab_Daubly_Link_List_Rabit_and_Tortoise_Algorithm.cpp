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
        next = NULL;
    }
};

class List
{
public:
    Node *start = NULL;
    void ins(int k)
    {
        Node *n = new Node(k);
        if (start == NULL)
        {
            start = n;
        }
        else
        {
            Node *p = start;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = n;
        }
    }

    void insLast(int k)
    {
        Node *n = new Node(k);
        if (start == NULL)
        {
            start = n;
        }
        else
        {
            n->next = start;
            start = n;
        }
    }

    void middleElement()
    {
        Node *ash = start;
        Node *sif = start;
        while (ash != NULL && ash->next != NULL)
        {
            sif = sif->next;
            ash = ash->next->next;
        }
        cout << "Middle element is: " << sif->val << endl;
    }

    void traverse()
    {
        Node *p = start;
        while (p != NULL)
        {
            cout << p->val << "\t";
            p = p->next;
        }
        cout << endl;
    }
};

int main()
{
    List t;
    t.ins(5);
    t.ins(10);
    t.ins(3);
    t.ins(6);
    t.insLast(9);
    t.traverse();
    t.middleElement();
    return 0;
}