class Solution
{
public:
    vector<int> largestValues(Node *root)
    {
        vector<int> ans;
        if (!root)
            return ans;
        queue<Node *> q;

        q.push(root);

        while (!q.empty())
        {
            queue<Node *> q1;
            int temp = INT_MIN;

            while (!q.empty())
            {
                Node *u = q.front();
                temp = max(u->data, temp);
                q.pop();
                if (u->left)
                    q1.push(u->left);
                if (u->right)
                    q1.push(u->right);
            }

            q = q1;
            ans.push_back(temp);
        }

        return ans;
    }
};