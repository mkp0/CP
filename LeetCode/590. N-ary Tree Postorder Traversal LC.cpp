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
    void po(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;

        for (auto x : root->children)
        {
            po(x, ans);
        }
        ans.push_back(root->val);
    }

    vector<int> postorder(Node *root)
    {
        vector<int> ans;

        po(root, ans);

        return ans;
    }
};