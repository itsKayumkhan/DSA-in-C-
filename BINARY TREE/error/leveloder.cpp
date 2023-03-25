#include <climits>
#include <iostream>
#include <queue>
using namespace std;
class Node
{

public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *Build(Node *root)
{
    int d;
    cout << "enter the element" << endl;
    cin >> d;

    root = new Node(d);
    if (d == -1)
        return NULL;

    cout << "enter the element in left side ot the " << d << endl;
    root->left = Build(root->left);

    cout << "enter the element in right  side ot the " << d << endl;
    root->right = Build(root->right);

    return root;
}

void level(Node *root)
{

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
        cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }
}
int main()
{ // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    Node *root = NULL;
    Build(root);
    level(root);

    return 0;
}