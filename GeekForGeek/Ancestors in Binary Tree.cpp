class Solution
{
public:
    // Function should return all the ancestor of the target node

    bool preorder(Node *root, int &target, vector<int> &ans)
    {
        if (!root)
            return false;

        bool a = preorder(root->left, target, ans);
        if (root->data == target)
            return true;
        bool b = preorder(root->right, target, ans);

        if (a || b)
        {
            ans.push_back(root->data);
            return true;
        }
        return false;
    }

    vector<int> Ancestors(struct Node *root, int target)
    {
        vector<int> ans;

        preorder(root, target, ans);

        return ans;
    }
};