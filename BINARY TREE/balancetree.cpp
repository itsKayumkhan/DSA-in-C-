   pair<bool,int> bst(Node* root)
    {
        if(root == NULL)
        {
             pair<bool,int> p = make_pair(true,0);
             return p;
        }
        
         pair<bool,int> left = bst(root->left);
         pair<bool,int> right = bst(root->right);
         
         bool leftANS = left.first;
         bool rightANS = right.first;
         bool diff = abs(left.second - right.second) <= 1;
         
          pair<bool,int> ans ;
          ans.second = max(left.second ,right.second) +1; 
         
         if(leftANS and rightANS and diff)
         {
             ans.first = true;
         }
         else
         ans.first = false;
         
         
         return ans ;
    }