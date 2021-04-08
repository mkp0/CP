class Solution
{
public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node *ans = nullptr;
    Node *inOrderSuccessor(Node *root, Node *x)
    {
        if (!root)
            return nullptr;

        inOrderSuccessor(root->left, x);
        if (root->data > x->data && !ans)
        {
            ans = root;
        }

        inOrderSuccessor(root->right, x);
        return ans;
    }
};