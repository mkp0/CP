void mirror(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    mirror(node->left);
    mirror(node->right);
    auto temp = node->left;
    node->left = node->right;
    node->right = temp;
}