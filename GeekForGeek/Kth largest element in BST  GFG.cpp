// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
public:
    void DFS(Node *root, int &k, int &ans)
    {
        if (!root)
            return;

        DFS(root->right, k, ans);
        k--;
        if (k == 0)
            ans = root->data;
        DFS(root->left, k, ans);
    }

    int kthLargest(Node *root, int k)
    {
        int ans = 0;
        DFS(root, k, ans);
        if (k <= 0)
            return ans;
        return -1;
    }
};