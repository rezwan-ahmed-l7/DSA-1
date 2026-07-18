#include <iostream>
#include <queue>
using namespace std;

class Trees
{
public:
    struct Node
    {
        int data;
        Node *left;
        Node *right;
    };

    Node *root;

    Trees()
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

    void creatRoot(int value)
    {
        root = createNode(value);
    }

    void insertLeft(Node *parent, int value)
    {
        parent->left = createNode(value);
    }

    void insertRight(Node *parent, int value)
    {
        parent->right = createNode(value);
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

    int getHeight(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }

        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        return max(leftHeight, rightHeight) + 1;
    }

    int getWidth(Node *node)
    {
        if (node == NULL)
            return 0;

        queue<Node *> q;
        q.push(node);
        int maxWidth = 0;

        while (!q.empty())
        {
            int levelSize = q.size();
            maxWidth = max(maxWidth, levelSize);

            for (int i = 0; i < levelSize; i++)
            {
                Node *current = q.front();
                q.pop();

                if (current->left != NULL)
                    q.push(current->left);
                if (current->right != NULL)
                    q.push(current->right);
            }
        }
        return maxWidth;
    }

    int countLeafNodes(Node *node)
    {
        if (node == NULL)
            return 0;

        if (node->left == NULL && node->right == NULL)
            return 1;

        return countLeafNodes(node->left) + countLeafNodes(node->right);
    }

    int countNonLeafNodes(Node *node)
    {
        if (node == NULL)
            return 0;

        if (node->left != NULL || node->right != NULL)
        {
            return 1 + countNonLeafNodes(node->left) + countNonLeafNodes(node->right);
        }

        return 0;
    }
};

int main()
{
    Trees t;
    t.creatRoot(1);
    t.insertLeft(t.root, 2);
    t.insertRight(t.root, 3);
    t.insertLeft(t.root->left, 4);
    t.insertRight(t.root->left, 5);
    t.insertLeft(t.root->right, 6);
    t.insertRight(t.root->right, 7);

    cout << "Preorder: ";
    t.displayPre(t.root);
    cout << endl;

    cout << "Inorder: ";
    t.displayIno(t.root);
    cout << endl;

    cout << "Postorder: ";
    t.displayPost(t.root);
    cout << endl;

    cout << "Level Order: ";
    t.displayLevelOrder(t.root);
    cout << endl;

    cout << "Height: " << t.getHeight(t.root) << endl;

    cout << "Width: " << t.getWidth(t.root) << endl;

    cout << "Leaf Nodes: " << t.countLeafNodes(t.root) << endl;

    cout << "Non-Leaf Nodes: " << t.countNonLeafNodes(t.root) << endl;

    return 0;
}