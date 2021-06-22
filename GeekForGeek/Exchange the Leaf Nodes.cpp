/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    bool isleaf(Node *root)
    {
        if (!root->left && !root->right)
            return true;

        return false;
    }

    void swapVal(Node *one, Node *two)
    {
        int temp = one->data;
        one->data = two->data;
        two->data = temp;
    }

    Node *temp;

    void preorder(Node *root)
    {
        if (!root)
            return;

        preorder(root->left);

        if (isleaf(root))
        {
            if (temp)
            {
                swapVal(root, temp);
                temp = NULL;
            }
            else
            {
                temp = root;
            }
        }

        preorder(root->right);
    }

    void pairwiseSwap(Node *root)
    {
        temp = NULL;
        preorder(root);
    }
};