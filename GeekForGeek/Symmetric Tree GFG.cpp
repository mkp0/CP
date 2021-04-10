bool is(Node *l, Node *r)
{
    if (!l && !r)
        return true;

    if (!l || !r || (l->data != r->data))
    {
        return false;
    }

    return is(l->left, r->right) && is(l->right, r->left);
}

bool isSymmetric(struct Node *root)
{
    if (!root)
        return true;

    return is(root->left, root->right);
}