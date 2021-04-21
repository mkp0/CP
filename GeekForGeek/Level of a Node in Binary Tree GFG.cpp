class Solution
{
public:
    // function should return level of the target node
    int get(Node *node, int target)
    {
        if (!node)
            return 1e5;
        if (node->data == target)
            return 1;
        return 1 + min(get(node->left, target), get(node->right, target));
    }
    int getLevel(struct Node *node, int target)
    {
        int ans = get(node, target);
        if (ans > 1e5)
            return 0;
        return ans;
    }
};