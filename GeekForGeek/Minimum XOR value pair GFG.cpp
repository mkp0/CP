struct Node
{
    int val;
    Node *child[2];
};

Node *createNode()
{
    Node *temp = new Node;
    temp->val = 0;
    temp->child[0] = nullptr;
    temp->child[1] = nullptr;
    return temp;
}

void insert(Node *root, int key)
{
    for (int i = 30; i >= 0; i--)
    {
        int bitp = (key >> i) & 1;
        if (!root->child[bitp])
        {
            root->child[bitp] = createNode();
        }
        root = root->child[bitp];
    }
    root->val = key;
}

int minXorFind(Node *root, int key)
{
    for (int i = 30; i >= 0; i--)
    {
        int bitp = (key >> i) & 1;
        if (root->child[bitp])
        {
            root = root->child[bitp];
        }
        else
        {
            root = root->child[1 - bitp];
        }
    }
    return key ^ root->val;
}

class Solution
{
public:
    int minxorpair(int n, int arr[])
    {
        Node *root = createNode();
        insert(root, arr[0]);
        int ans = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            ans = min(ans, minXorFind(root, arr[i]));
            insert(root, arr[i]);
        }

        return ans;
    }
};