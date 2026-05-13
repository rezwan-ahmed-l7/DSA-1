/* Linked List Node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution
{
public:
    Node *removeDuplicates(Node *head)
    {
        // your code here
        if (!head)
            return NULL;

        Node *current = head;

        while (current && current->next)
        {
            if (current->data == current->next->data)
            {
                Node *temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
            else
            {
                current = current->next;
            }
        }

        return head;
    }
};