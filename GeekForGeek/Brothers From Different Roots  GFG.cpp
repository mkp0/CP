bool find(Node *root, int val)
{
    if (!root)
        return false;

    return (root->data == val) || find(root->right, val) || find(root->left, val);
}

int countPairs(Node *root1, Node *root2, int x)
{
    if (!root1)
        return 0;
    if (find(root2, x - root1->data))
    {
        return 1 + countPairs(root1->left, root2, x) + countPairs(root1->right, root2, x);
    }
    return countPairs(root1->left, root2, x) + countPairs(root1->right, root2, x);
}