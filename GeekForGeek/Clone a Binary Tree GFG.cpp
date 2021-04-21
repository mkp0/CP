class Solution
{
public:
    /* The function should clone the passed tree and return 
       root of the cloned tree */

    Node *clonelr(Node *root, map<Node *, Node *> &m)
    {
        if (!root)
            return nullptr;

        Node *ans = new Node(root->data);

        ans->left = clonelr(root->left, m);
        ans->right = clonelr(root->right, m);
        m[root] = ans;
        return ans;
    }

    void clonerand(Node *ans, Node *root, map<Node *, Node *> &m)
    {
        if (!ans)
            return;

        ans->random = m[root->random];
        clonerand(ans->left, root->left, m);
        clonerand(ans->right, root->right, m);
    }

    Node *cloneTree(Node *tree)
    {
        Node *ans = NULL;
        if (!tree)
            return ans;
        map<Node *, Node *> m;
        ans = clonelr(tree, m);
        clonerand(ans, tree, m);

        return ans;
    }
};