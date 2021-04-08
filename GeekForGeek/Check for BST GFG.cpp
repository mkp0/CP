class Solution
{
public:
    bool BST(Node *root, int &prev)
    {
        if (!root)
            return true;

        BST(root->left, prev);

        if (root->data <= prev)
        {
            return false;
        }
        prev = root->data;

        return BST(root->right, prev);
    }

    bool isBST(Node *root)
    {
        int prev = INT_MIN;

        return BST(root, prev);
    }
};
