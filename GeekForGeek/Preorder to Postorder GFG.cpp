//User function template in C++

// pre : given preorder if the tree
// size : size of the array
// print postorder traveresal of the tree

Node *form(int pre[], int size, int &cur, int mi, int ma)
{
    if (cur == size)
        return nullptr;
    if (pre[cur] < mi || pre[cur] > ma)
        return nullptr;

    Node *root = newNode(pre[cur]);
    cur += 1;

    root->left = form(pre, size, cur, mi, root->data);
    root->right = form(pre, size, cur, root->data, ma);
    return root;
}

Node *constructTree(int pre[], int size)
{
    int cur = 0;
    return form(pre, size, cur, INT_MIN, INT_MAX);
}