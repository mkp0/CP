class Solution
{
public:
    //Function to convert binary tree into circular doubly linked list.
    Node *pre;
    Node *head;

    void inorder(Node *root)
    {
        if (root->left)
            inorder(root->left);

        if (!head)
        {
            head = root;
            pre = head;
        }
        else
        {
            pre->right = root;
            root->left = pre;
            pre = root;
        }

        if (root->right)
            inorder(root->right);
    }

    Node *bTreeToCList(Node *root)
    {
        if (!root)
            return nullptr;
        pre = NULL;
        head = NULL;
        inorder(root);

        head->left = pre;
        pre->right = head;

        Node *temp = head;

        return head;
    }
};