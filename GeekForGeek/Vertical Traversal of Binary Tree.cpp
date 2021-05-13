class Solution
{
public:
    //Function to find the vertical order traversal of Binary Tree.

    vector<int> verticalOrder(Node *root)
    {
        vector<int> ans;

        if (!root)
            return ans;

        map<int, vector<int>> temp;

        queue<pair<Node *, int>> q;

        q.push({root, 0});

        while (!q.empty())
        {
            auto x = q.front();
            q.pop();
            temp[x.second].push_back(x.first->data);

            if (x.first->left)
            {
                q.push({x.first->left, x.second - 1});
            }
            if (x.first->right)
            {
                q.push({x.first->right, x.second + 1});
            }
        }

        for (auto x : temp)
        {
            for (auto y : x.second)
            {
                ans.push_back(y);
            }
        }

        return ans;
    }
};