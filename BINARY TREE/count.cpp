int countBT(Node* root)
{
    if(root == NULL) 
    return 0;

    return countBT(root->left ) + countBT(root->right) +1;
}