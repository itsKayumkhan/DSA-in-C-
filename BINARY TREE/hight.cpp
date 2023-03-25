int hightBT(Node* root)
{  if(root == NULL) return 0;
  int  l_hight = hightBT(root -> left);
  int r_hight = hightBT(root -> right);

  return max(l_hight, r_hight) +1; 
}