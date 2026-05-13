/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode d(0);
        d.next = head;
        ListNode *f = &d;
        ListNode *s = &d;

        for (int i = 0; i <= n; i++)
        {
            f = f->next;
        }

        while (f)
        {
            f = f->next;
            s = s->next;
        }

        ListNode *toDelete = s->next;
        s->next = s->next->next;
        delete toDelete;

        return d.next;
    }
};