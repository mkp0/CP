int inorder(Node *r)
{
    if (!r)
        return 0;

    if (r->left == NULL && r->right == NULL)
        return r->data;

    int su = inorder(r->left) + inorder(r->right);
    return su;
}

int sumOfLeafNodes(Node *r)
{
    return inorder(r);
}