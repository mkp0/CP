/*
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    Node *one = NULL;
    Node *two = NULL;

    void preorder(Node *root, int &prev)
    {
        if (!root)
        {
            return;
        }

        preorder(root->left, prev);

        if (prev > root->data)
        {
            two = root;
        }

        if (!two)
            one = root;

        prev = root->data;

        preorder(root->right, prev);
    }

    void correctBST(Node *root)
    {
        one = NULL;
        two = NULL;
        int prev = -1;

        preorder(root, prev);

        if (one && two)
        {
            int temp = one->data;
            one->data = two->data;
            two->data = temp;
        }
    }
};