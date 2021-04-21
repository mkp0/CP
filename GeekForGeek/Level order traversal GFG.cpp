class Solution
{
public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *node)
    {
        vector<int> ans;
        if (!node)
            return ans;

        queue<Node *> q;
        q.push(node);

        while (!q.empty())
        {
            queue<Node *> q1;

            while (!q.empty())
            {
                auto x = q.front();
                ans.push_back(x->data);
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
            q = q1;
        }
        return ans;
    }
};