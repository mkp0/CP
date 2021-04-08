class Solution
{
public:
    /*You are required to complete below method */
    int maxLevelSum(Node *root)
    {
        // Your code here
        if (!root)
            return 0;
        queue<Node *> q;

        q.push(root);
        int ans = INT_MIN;

        while (!q.empty())
        {
            queue<Node *> q1;
            int temp = 0;

            while (!q.empty())
            {
                Node *u = q.front();
                temp += u->data;
                q.pop();
                if (u->left)
                    q1.push(u->left);
                if (u->right)
                    q1.push(u->right);
            }

            q = q1;
            ans = max(ans, temp);
        }

        return ans;
    }
};
