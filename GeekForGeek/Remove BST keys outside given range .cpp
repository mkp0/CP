// User function Template for C++

/*struct Node
{
    int data;
    Node* left;
    Node* right;
};*/
class Solution
{
public:
    Node *removekeys(Node *root, int l, int r)
    {
        if (!root)
            return root;

        root->left = removekeys(root->left, l, r);
        root->right = removekeys(root->right, l, r);

        if (root->data < l)
            return root->right;
        if (root->data > r)
            return root->left;

        return root;
    }
};