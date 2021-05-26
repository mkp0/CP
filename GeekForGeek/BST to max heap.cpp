class Solution
{
public:
    void inorder(Node *root, vector<int> &store)
    {
        if (!root)
            return;

        inorder(root->left, store);
        store.push_back(root->data);
        inorder(root->right, store);
    }

    int i = 0;
    void heapconvertor(Node *root, vector<int> &ans)
    {
        if (!root)
            return;
        heapconvertor(root->left, ans);
        heapconvertor(root->right, ans);
        // we already filled the small value to left and right not root will have >= children
        root->data = ans[i];
        i++;
    }

    void convertToMaxHeapUtil(Node *root)
    {
        vector<int> store;
        inorder(root, store);
        heapconvertor(root, store);
    }
};