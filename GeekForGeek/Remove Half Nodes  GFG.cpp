// Return the root of the modified tree after removing all the half nodes.
Node *RemoveHalfNodes(Node *root)
{
    if (!root)
        return NULL;

    root->left = RemoveHalfNodes(root->left);
    root->right = RemoveHalfNodes(root->right);

    if (!root->left && !root->right)
        return root;

    if (!root->left || !root->right)
    {
        return (root->left) ? root->left : root->right;
    }

    return root;
}