bool isHeap(Node *node)
{
    if (!node)
        return true;
    if (node->left && node->data < node->left->data)
        return false;
    if (node->right && node->data < node->right->data)
        return false;

    return isHeap(node->left) && isHeap(node->right);
}