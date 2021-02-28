void inorder(Node *r, vector<int> &bs)
{
    if (!r)
        return;

    inorder(r->left, bs);
    bs.push_back(r->data);
    inorder(r->right, bs);
}

Node *bst(vector<int> &bs, int st, int ed)
{
    if (st > ed)
        return nullptr;

    int mi = (st + ed) / 2;

    Node *root = new Node(bs[mi]);
    root->left = bst(bs, st, mi - 1);
    root->right = bst(bs, mi + 1, ed);

    return root;
}

Node *binaryTreeToBST(Node *root)
{
    vector<int> bs;
    inorder(root, bs);
    sort(bs.begin(), bs.end());

    return bst(bs, 0, bs.size() - 1);
}