//Function to delete a node from BST.

int findRightMin(Node *root)
{
    if (root->left)
        return findRightMin(root->left);

    return root->data;
}

Node *deleteNode(Node *root, int X)
{
    if (!root)
        return nullptr;
    if (root->data > X)
        root->left = deleteNode(root->left, X);
    else if (root->data < X)
        root->right = deleteNode(root->right, X);
    else
    {
        if (!root->left)
            return root->right;
        else if (!root->right)
            return root->left;
        else
        {
            int val = findRightMin(root->right);
            root->data = val;
            root->right = deleteNode(root->right, val);
        }
    }
    return root;
}