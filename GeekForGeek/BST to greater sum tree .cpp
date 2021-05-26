class Solution
{
public:
    void reversein(Node *root, int &su)
    {
        if (!root)
            return;

        reversein(root->right, su);
        int temp = root->data;
        root->data = su;
        su += temp;
        reversein(root->left, su);
    }

    void transformTree(struct Node *root)
    {
        int su = 0;

        reversein(root, su);
    }
};