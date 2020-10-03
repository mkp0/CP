long int sumBT(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    long int sa = sumBT(root->left);
    long int sb = sumBT(root->right);

    long int su = sa + sb + (root->key);

    return su;
}