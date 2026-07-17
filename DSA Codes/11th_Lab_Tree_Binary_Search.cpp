#include <iostream>
#include <queue>
using namespace std;

class BST
{
public:
    struct Node
    {
        int data;
        Node *left;
        Node *right;
    };

    Node *root;

    BST()
    {
        root = NULL;
    }

    Node *createNode(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    void insertvalue(int value)
    {
        root = insertNode(root, value);
    }

    Node *insertNode(Node *node, int value)
    {
        if (node == NULL)
        {
            return createNode(value);
        }

        if (value < node->data)
        {
            node->left = insertNode(node->left, value);
        }
        else if (value > node->data)
        {
            node->right = insertNode(node->right, value);
        }

        return node;
    }

    void displayPre(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        cout << node->data << " ";
        displayPre(node->left);
        displayPre(node->right);
    }

    void displayIno(Node *node)
    {
        if (node == NULL)
            return;
        displayIno(node->left);
        cout << node->data << " ";
        displayIno(node->right);
    }

    void displayPost(Node *node)
    {
        if (node == NULL)
            return;
        displayPost(node->left);
        displayPost(node->right);
        cout << node->data << " ";
    }

    void displayLevelOrder(Node *start)
    {
        if (start == NULL)
            return;

        queue<Node *> q;
        q.push(start);

        while (!q.empty())
        {
            Node *current = q.front();
            q.pop();
            cout << current->data << " ";

            if (current->left != NULL)
            {
                q.push(current->left);
            }
            if (current->right != NULL)
            {
                q.push(current->right);
            }
        }
    }

    void searchValue(int value)
    {
        if (searchNode(root, value) == NULL)
        {
            cout << "Not Found" << endl;
        }
        else
        {
            cout << "Found" << endl;
        }
    }

    Node *searchNode(Node *node, int value)
    {
        if (node == NULL || node->data == value)
        {
            return node;
        }

        if (value < node->data)
        {
            return searchNode(node->left, value);
        }

        return searchNode(node->right, value);
    }

    int getMax()
    {
        if (root == NULL)
        {
            cout << "Tree is empty" << endl;
            return -1;
        }
        return findMax(root);
    }

    int findMax(Node *node)
    {
        if (node->right == NULL)
        {
            return node->data;
        }
        return findMax(node->right);
    }

    int getMin()
    {
        if (root == NULL)
        {
            cout << "Tree is empty" << endl;
            return -1;
        }
        return findMin(root);
    }

    int findMin(Node *node)
    {
        if (node->left == NULL)
        {
            return node->data;
        }
        return findMin(node->left);
    }
};

int main()
{
    BST b;

    b.insertvalue(50);
    b.insertvalue(30);
    b.insertvalue(70);
    b.insertvalue(20);
    b.insertvalue(40);
    b.insertvalue(60);
    b.insertvalue(80);

    cout << "BST: ";
    b.displayIno(b.root);
    cout << endl;

    cout << "Max: " << b.getMax() << endl;
    cout << "Min: " << b.getMin() << endl;

    return 0;
}