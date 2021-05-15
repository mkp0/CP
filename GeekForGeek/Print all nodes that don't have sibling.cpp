//User function Template for C++

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

void func(Node *node, vector<int> &ans)
{
    if (!node)
        return;

    if (node->left && node->right)
    {
        func(node->left, ans);
        func(node->right, ans);
    }
    else if (node->left)
    {
        ans.push_back(node->left->data);
        func(node->left, ans);
    }
    else if (node->right)
    {
        ans.push_back(node->right->data);
        func(node->right, ans);
    }
}

vector<int> noSibling(Node *node)
{
    vector<int> ans;
    if (!node)
        return ans;

    func(node, ans);

    if (!ans.size())
    {
        ans.push_back(-1);
    }

    sort(ans.begin(), ans.end());

    return ans;
}