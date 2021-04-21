/* Structure of Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};*/

/* The function should print all the paths from root
 to leaf nodes of the binary tree */
void DFS(Node *root, vector<int> temp, vector<vector<int>> &ans)
{
    if (!root)
        return;
    temp.push_back(root->data);
    if (!root->left && !root->right)
    {
        ans.push_back(temp);
    }
    DFS(root->left, temp, ans);
    DFS(root->right, temp, ans);
}

vector<vector<int>> Paths(Node *root)
{
    vector<vector<int>> ans;
    if (!root)
        return ans;
    vector<int> temp;
    DFS(root, temp, ans);
    return ans;
}