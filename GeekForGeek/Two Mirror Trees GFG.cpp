class Solution
{
public:
    int areMirror(Node *a, Node *b)
    {
        if (!a && !b)
            return true;
        if (!a || !b)
            return false;

        if (a->data != b->data)
            return false;

        return areMirror(a->left, b->right) && areMirror(a->right, b->left);
    }
};