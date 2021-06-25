/*
Structure of the binary Search Tree is as
struct node
{
	int key;
	struct node *left, *right;
};
*/
// your task is to complete the Function
// Function is used to change a key value in the given BST
// Note: Function should return root node to the new modified BST

int rightMin(node *root)
{
    while (root->left)
        root = root->left;

    return root->key;
}

node *deleteNode(node *root, int val)
{
    if (!root)
        return root;

    if (root->key < val)
    {
        root->right = deleteNode(root->right, val);
    }
    else if (root->key > val)
    {
        root->left = deleteNode(root->left, val);
    }
    else
    {
        if (!root->left)
            return root->right;
        if (!root->right)
            return root->left;

        int val = rightMin(root->right);
        root->key = val;
        root->right = deleteNode(root->right, val);
    }

    return root;
}

node *insertNode(node *root, int val)
{
    if (!root)
        return new node(val);

    if (root->key >= val)
    {
        root->left = insertNode(root->left, val);
    }
    else
    {
        root->right = insertNode(root->right, val);
    }

    return root;
}

struct node *changeKey(struct node *root, int oldVal, int newVal)
{
    root = deleteNode(root, oldVal);
    root = insertNode(root, newVal);

    return root;
}