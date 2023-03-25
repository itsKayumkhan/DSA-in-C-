// sum of longest Node in tree

void sum(Node* root , int sum , int &maxSum ,int len,int &maxLen )
{
    if( root == NULL )
    {
        if(len > maxLen)
        {
         maxLen = len;
         maxSum = sum;
        }
        else if(len == maxLen)
        {
            maxSum = max(sum,maxSum);
        }
        return;
    }

    sum = sum + root->data;

    sum(root->left,sum,maxSum,len+1,maxLen);
    sum(root->right,sum,maxSum,len+1,maxLen);
}