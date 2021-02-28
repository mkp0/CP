Node *insert(Node *root, int key)
{
    if (!root)
        return new Node(key);

    Node *temp = root;

    while (1)
    {
        if (root->data > key)
        {
            if (!root->left)
            {
                root->left = new Node(key);
                return temp;
            }

            root = root->left;
        }
        else if (root->data < key)
        {
            if (!root->right)
            {
                root->right = new Node(key);
                return temp;
            }
            root = root->right;
        }
        else
        {
            return temp;
        }
    }
    return temp;
}