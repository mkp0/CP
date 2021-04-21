//Function to check whether a binary tree is balanced or not.

int DFS(Node *root, bool &ans)
{
    if (!root)
        return 0;
    int lh = DFS(root->left, ans);
    int rh = DFS(root->right, ans);

    if (abs(lh - rh) > 1)
    {
        ans = false;
    }

    return max(lh, rh) + 1;
}

bool isBalanced(Node *root)
{
    bool ans = true;
    DFS(root, ans);
    return ans;
}