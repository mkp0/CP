class Solution
{
public:
    unordered_set<int> mp;
    bool findTarget(TreeNode *&root, int &k)
    {
        if (!root)
            return false;
        if (mp.find(k - root->val) != mp.end())
            return true;
        mp.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};