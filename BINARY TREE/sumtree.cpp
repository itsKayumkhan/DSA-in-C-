/*Input:
    3
  /   \
 1     2

Output: 1
Explanation:
The sum of left subtree and right subtree is
1 + 2 = 3, which is the value of the root node.
Therefore,the given binary tree is a sum tree. */
pair<bool, int> solve(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p1 = make_pair(true, 0);
        return p1;
    }
    if (root->left == NULL and root->right == NULL)
    {
        pair<bool, int> p2 = make_pair(true, root->data);
        return p2;
    }

    pair<bool, int> left = solve(root->left);
    pair<bool, int> right = solve(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool find = root->data == leftAns.second + rightAns.second;

    pair<bool, int> ans;
    
    if (find and leftAns and rightAns)
    {
        ans.first = true;
        ans.second = 2 * root->data;
    }
    else
        ans.first = false;

    return ans;
}

bool sum()
{
    return solve(root).first;
}