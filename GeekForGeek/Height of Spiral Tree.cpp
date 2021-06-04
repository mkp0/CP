/*Structure of the node of the binary tree

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// Return the height of the given special binary tree

bool isleaf(Node *root)
{
    return (root->left && (root->left->right == root) && root->right && (root->right->left == root));
}

int height(Node *root)
{
    if (isleaf(root))
        return 1;

    int lh = 0;
    int rh = 0;

    if (root->left)
    {
        lh = height(root->left);
    }
    if (root->right)
    {
        rh = height(root->right);
    }

    return max(lh, rh) + 1;
}

int findTreeHeight(Node *root)
{
    return height(root);
}