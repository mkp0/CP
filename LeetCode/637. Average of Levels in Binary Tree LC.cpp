class Solution
{
public:
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> ans;
        if (!root)
            return ans;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int x = q.size();
            int y = x;
            double su = 0;

            while (x--)
            {
                su += q.front()->val;
                if (q.front()->left)
                {
                    q.push(q.front()->left);
                }
                if (q.front()->right)
                {
                    q.push(q.front()->right);
                }
                q.pop();
            }

            su = su / y;
            ans.push_back(su);
        }

        return ans;
    }
};