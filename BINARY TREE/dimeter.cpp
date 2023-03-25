int dimeter(Node *root)
{  if(root ==NULL)
    return 0;
    int l_hight   = hightBT(root - > left);
    int r_hight   = hightBT(root - > right);
    int curr      = l_hight + r_hight + 1;
    int l_dimeter = dimeter(root->left);
    int r_dimeter = dimeter(root->right);

    return max(curr, max(r_dimeter, l_dimeter));
}

//let's optimize using pair
  pair<int, int> dimeter(Node* root)
  {
      if(root == NULL)
      {
          pair<int,int> p = make_pair(0,0);
          return p ;
      }
      
      pair<int, int> left = dimeter(root -> left);
      pair<int, int> right = dimeter(root -> right);
      
      int opt1 = left.first;
      int opt2 = right.first;
      int opt3 = left.second + right.second + 1;
      
      pair<int,int> ans ;
      ans.first =max(opt3,max(opt1,opt2));
      ans.second = max(left.second , right.second)+1;
       return ans ;
  }
