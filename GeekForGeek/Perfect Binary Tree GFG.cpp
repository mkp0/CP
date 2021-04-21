/* This function tests if a binary tree is perfect
   or not. It basically checks for two things :
   1) All leaves are at same level
   2) All internal nodes have two children */

bool DFS(Node *root, int d, int level)
{
    if (!root)
        return true;
    if (!root->left && !root->right)
        return (d == level + 1);

    if (!root->left || !root->right)
        return false;

    return DFS(root->right, d, level + 1) && DFS(root->left, d, level + 1);
}

int depth(Node *root)
{
    if (!root)
        return 0;
    int lh = depth(root->left);
    int rh = depth(root->right);
    return max(lh, rh) + 1;
}

bool isPerfectRec(struct Node *root, int d, int level)
{
    int dep = depth(root);
    return DFS(root, dep, 0);
}