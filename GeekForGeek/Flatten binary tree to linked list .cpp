class Solution
{
public:
    Node *solve(Node *root)
    {
        if (!root)
            return nullptr;
        Node *left = root->left;
        Node *right = root->right;

        root->left = NULL;
        root->right = NULL;

        root->right = solve(left);

        Node *temp = root;

        while (temp->right)
        {
            temp = temp->right;
        }

        temp->right = solve(right);

        return root;
    }

    void flatten(Node *root)
    {
        if (!root)
            return;
        solve(root);
    }
};