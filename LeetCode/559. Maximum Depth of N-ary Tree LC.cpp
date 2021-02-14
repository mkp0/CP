/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    int height(Node *root)
    {
        if (root == NULL)
            return 0;

        int maxh = 0;

        for (auto x : root->children)
        {
            maxh = max(maxh, height(x));
        }

        return maxh + 1;
    }

    int maxDepth(Node *root)
    {
        return height(root);
    }
};