/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

void preorder(Node *root1, Node *root2, int lev)
{
    if (!root1 || !root2)
        return;

    if (lev % 2)
    {
        int temp = root1->data;
        root1->data = root2->data;
        root2->data = temp;
    }

    preorder(root1->left, root2->right, lev + 1);
    preorder(root1->right, root2->left, lev + 1);
}

void reverseAlternate(Node *root)
{
    int lev = 1;
    preorder(root->left, root->right, lev);
}