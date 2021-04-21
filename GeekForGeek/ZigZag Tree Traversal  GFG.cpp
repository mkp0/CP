//Function to store the zig zag order traversal of tree in a list.
vector<int> zigZagTraversal(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;

    queue<Node *> q;
    q.push(root);
    int lev = 0;

    while (!q.empty())
    {
        lev++;
        queue<Node *> q1;
        stack<int> s;
        while (!q.empty())
        {
            auto x = q.front();
            if (lev % 2)
                ans.push_back(x->data);
            else
                s.push(x->data);
            if (x->left)
            {
                q1.push(x->left);
            }
            if (x->right)
            {
                q1.push(x->right);
            }
            q.pop();
        }
        while (!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        q = q1;
    }
    return ans;
}