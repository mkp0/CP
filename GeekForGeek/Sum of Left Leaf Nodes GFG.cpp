// function should return the sum of all
// left leaf nodes
bool isleaf(Node *root)
{
    if (!root->left && !root->right)
        return true;
    return false;
}

int leftLeavesSum(Node *root)
{
    if (!root)
        return 0;
    int ans = 0;
    if (root->left && isleaf(root->left))
    {
        ans += root->left->data;
    }
    return ans + leftLeavesSum(root->left) + leftLeavesSum(root->right);
}