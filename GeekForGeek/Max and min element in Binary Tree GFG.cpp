// Returns maximum value in a given Binary Tree
int findMax(struct node *root)
{
    int ans = INT_MIN;
    if (!root)
        return ans;
    ans = max(ans, root->data);
    if (root->left)
        ans = max(ans, findMax(root->left));
    if (root->right)
        ans = max(ans, findMax(root->right));

    return ans;
}

// Returns minimum value in a given Binary Tree
int findMin(struct node *root)
{
    int ans = INT_MAX;
    if (!root)
        return ans;
    ans = min(ans, root->data);
    if (root->left)
        ans = min(ans, findMin(root->left));
    if (root->right)
        ans = min(ans, findMin(root->right));

    return ans;
}