class Solution
{
public:
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int DFS(Node *node)
    {
        if (!node)
            return 0;
        int x = node->data;
        int l = DFS(node->left);
        int r = DFS(node->right);

        node->data = l + r;

        return (x + l + r);
    }
    void toSumTree(Node *node)
    {
        DFS(node);
    }
};