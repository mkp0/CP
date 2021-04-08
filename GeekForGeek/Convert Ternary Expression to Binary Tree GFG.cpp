Node *convertion(string str, int &i)
{
    if (str.size() <= i)
        return nullptr;

    Node *root = new Node(str[i]);

    i++;

    if (str[i] == '?')
    {
        i++;
        root->left = convertion(str, i);
        i++;
        root->right = convertion(str, i);
    }

    return root;
}

Node *convertExpression(string str, int i)
{
    int x = 0;

    Node *root = convertion(str, x);

    return root;
}