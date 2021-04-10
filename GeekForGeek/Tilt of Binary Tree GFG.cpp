int tilt(Node *root)
{
    if (!root)
        return 0;

    int left = tilt(root->left);
    int righ = tilt(root->right);

    int temp = root->val;
    root->val = abs(left - righ);

    return left + righ + temp;
}

int su(Node *root)
{
    if (!root)
        return 0;

    return su(root->left) + su(root->right) + root->val;
}

int tiltTree(Node *root)
{
    tilt(root);

    return su(root);
}