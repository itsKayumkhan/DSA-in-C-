// boundary of tree 🤔🤔🤔
void left(Node *root, vector<int> &ans)
{
    if ((root == NULL) or (root->left == NULL and root->right  == NULL))
        return;

    ans.push_back(root->data);

    if (root->left)
        left(root->left, ans);
    else
        left(root->right, ans);
}
void leafNode(Node *root ,vector<int>&ans)
{
    if(root == NULL)
     return;
    if(root->left == NULL && root->right == NULL)
  {
      ans.push_back(root->data);
      return ;
  }
    leafNode(root->left,ans);
    leafNode(root->right,ans);


}

void rightNode(Node *root ,vector<int>&ans)
{
    if((root == NULL) || (root->right == NULL and root->left == NULL))
    return;

    if(root -> right)
     rightNode(root->right,ans);
    else
     rightNode(root->left,ans);

    ans.push_back(root->data);
}
int main(Node *root, vector<int> ans)
{
    if (root)
        return root;

    ans.push_back(root->data);

    // left node
    left(root->left,ans);
    //leaf Node
    leafNode(root->left,ans);
    leafNode(root->right,ans);
    //right Node
    rightNode(root->right,ans);
    return 0;
}