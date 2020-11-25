int evalTree(node *root)
{
    if (!root)
    {
        return 0;
    }

    string s = root->data;
    int l = evalTree(root->left);
    int r = evalTree(root->right);

    if (s == "+")
    {
        return l + r;
    }
    else if (s == "-")
    {
        return l - r;
    }
    else if (s == "*")
    {
        return l * r;
    }
    else if (s == "/")
    {
        return l / r;
    }

    return stoi(s);
}