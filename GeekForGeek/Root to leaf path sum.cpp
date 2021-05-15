class Solution
{
public:
    bool ans;
    void func(Node *root, int s)
    {
        if (!root)
        {
            return;
        }
        s -= root->data;
        if (!root->left && !root->right)
        {
            ans = ans || (s == 0);
            return;
        }

        func(root->left, s);
        func(root->right, s);
    }

    bool hasPathSum(Node *root, int s)
    {
        // Your code here
        if (!root)
        {
            return false;
        }

        ans = false;

        func(root, s);

        return ans;
    }
};