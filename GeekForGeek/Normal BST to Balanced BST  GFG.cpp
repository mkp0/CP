void inorder(Node *r, vector<int> &v)
{
    if (!r)
        return;

    inorder(r->left, v);
    v.push_back(r->data);
    inorder(r->right, v);
}

Node *construct(vector<int> &bst, int st, int ed)
{
    if (st > ed)
        return nullptr;
    int mi = (st + ed) / 2;

    Node *temp = new Node(bst[mi]);
    temp->left = construct(bst, st, mi - 1);
    temp->right = construct(bst, mi + 1, ed);

    return temp;
}

Node *buildBalancedTree(Node *root)
{
    vector<int> bst;

    inorder(root, bst);

    Node *ans = construct(bst, 0, bst.size() - 1);

    return ans;
}