#include <climits>
 #include <iostream>
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

Node* Build(Node *root)
{int d;
cout<<"enter the element"<<endl;
cin>>d;

   root = new Node(d);
    if (d == -1)
        return NULL;
  

    cout<<"enter the element in left side ot the "<<d<<endl;
    root -> left= Build(root -> left);

        cout<<"enter the element in right  side ot the "<<d<<endl;
    root -> right= Build(root -> right);

    return root;
}

int sumBt(Node* root)
{
    if(root == NULL)
    return 0;

    return sumBt(root->right) + sumBt(root->left) + root ->data;
}
int main () {
  Node * root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root->left->left = new Node(4);
  root->left->left->left = new Node(4);
  

  
  cout <<sumBt(root)<< endl;

   return 0;
}