int inorder(Node* root)
{
    inorder(root -> left);
    cout << root->data << " ";
    inorder(root->right);
}
int preorder(Node* root)
{
    cout << root->data << " ";
    inorder(root -> left);
    inorder(root->right);
}
int postorder(Node* root)
{
    inorder(root -> left);
    inorder(root->right);
    cout << root->data << " ";
}