// leaf nodes of the binary tree
int sumLeaf(Node *root)
{
    int ans = 0;
    if (!root)
        return 0;

    if (!root->left && !root->right)
    {
        return root->data;
    }

    return sumLeaf(root->left) + sumLeaf(root->right);
}