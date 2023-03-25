vector<int> zigzag(Node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }

    queue<Node *> q;
    q.push(root);
    bool flag = true;
    while (!q.empty())
    {

        int size = q.size;
        vector<int> ans[size];

        for (int i = 0; i < size; i++)
        {
            Node *frontNode = q.front();
            q.pop();
            int indx = flag ? i : size - i - 1;

            ans[indx] = frontNode->data;

            if (frontNode->left)
                q.push(frontNode->left);

            if (frontNode->right)
                q.push(frontNode->right);
        }
        flag = !flag;
        for (auto i : ans)
        {
            result.push_back(i);
        }
    }

    return result;
}