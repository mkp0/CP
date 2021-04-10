class Solution
{
public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        if (!root)
            return ans;

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            auto x = q.front();
            ans.push_back(x->data);

            queue<Node *> q1;

            while (!q.empty())
            {
                x = q.front();
                q.pop();
                if (x->right)
                {
                    q1.push(x->right);
                }
                if (x->left)
                {
                    q1.push(x->left);
                }
            }

            q = q1;
        }

        return ans;
    }
};