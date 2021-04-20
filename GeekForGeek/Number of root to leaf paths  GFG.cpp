void DFS(Node* root, int dep,vector<int>& ans)
{
    if(!root)return;
    dep++;
    if(!root->left && !root->right)
    {
        ans[dep]++;
        return;
    }
    if(root->left)
    {
        DFS(root->left,dep,ans);
    }
    if(root->right)
    {
        DFS(root->right,dep,ans);
    }
}

void pathCounts(Node *root)
{
    if(!root)return;
    vector<int> ans(101);
    DFS(root,0,ans);
    for(int i = 1 ; i <= 100 ; i++)
    {
        if(ans[i])
        {
            cout << i << " " << ans[i] << " $"; 
        }
    }
}