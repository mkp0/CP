class Solution
{
public:
    /*You are required to complete this function*/
    void inorder(Node *root, int &ans, int le)
    {
        if (!root)
            return;

        if (le % 2)
        {
            ans -= root->data;
        }
        else
        {
            ans += root->data;
        }
        inorder(root->left, ans, le + 1);
        inorder(root->right, ans, le + 1);
    }

    int getLevelDiff(Node *root)
    {
        int ans = 0;

        inorder(root, ans, 0);

        return ans;
    }
};