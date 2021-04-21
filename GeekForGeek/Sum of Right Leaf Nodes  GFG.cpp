// function should return the sum of all
// right leaf nodes
bool isleaf(Node *root)
{
    if (!root->left && !root->right)
        return true;
    return false;
}

int rightLeafSum(Node *root)
{
    if (!root)
        return 0;
    int ans = 0;
    if (root->right && isleaf(root->right))
    {
        ans += root->right->data;
    }
    return ans + rightLeafSum(root->left) + rightLeafSum(root->right);
}