class Solution
{
public:
    void LV(Node *root, vector<int> &ans)
    {
        if (!root || (!root->left && !root->right))
            return;

        if (root->left)
        {
            ans.push_back(root->data);
            LV(root->left, ans);
        }
        else
        {
            ans.push_back(root->data);
            LV(root->right, ans);
        }
    }

    void RV(Node *root, vector<int> &ans)
    {
        if (!root || (!root->left && !root->right))
            return;

        if (root->right)
        {
            RV(root->right, ans);
            ans.push_back(root->data);
        }
        else
        {
            RV(root->left, ans);
            ans.push_back(root->data);
        }
    }

    void LN(Node *root, vector<int> &ans)
    {
        if (!root)
            return;

        if ((!root->left && !root->right))
        {
            ans.push_back(root->data);
        }
        LN(root->left, ans);
        LN(root->right, ans);
    }

    vector<int> printBoundary(Node *root)
    {
        vector<int> ans;
        if (!root)
            return ans;

        ans.push_back(root->data);

        if (!root->left && !root->right)
            return ans;

        LV(root->left, ans);
        LN(root, ans);
        RV(root->right, ans);

        return ans;
    }
};