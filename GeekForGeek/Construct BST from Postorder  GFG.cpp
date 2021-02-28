Node *tree(int post[], int &idx, int mini, int maxi)
{
    if (idx < 0)
        return nullptr;

    if (post[idx] < mini || post[idx] > maxi)
        return nullptr;

    Node *temp = new Node(post[idx]);
    idx = idx - 1;

    //right
    temp->right = tree(post, idx, temp->data, maxi);

    //left
    temp->left = tree(post, idx, mini, temp->data);

    return temp;
}

Node *constructTree(int post[], int size)
{
    if (size == 0)
        return nullptr;
    int idx = size - 1;
    return tree(post, idx, INT_MIN, INT_MAX);
}