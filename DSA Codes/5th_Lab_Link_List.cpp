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
    t.traverse();
    return 0;
}
