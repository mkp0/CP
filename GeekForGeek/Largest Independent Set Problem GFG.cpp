// you are required to complete this function
// function should return the size of the 
// Largest Independent set in the tree

int DFS(Node* root)
{
    if(!root)return 0;
    
    int l = DFS(root->left);
    int r = DFS(root->right);
    
    int ans = 0;
    if(root->left)
    {
       ans += DFS(root->left->left);
       ans += DFS(root->left->right);
    }
    
    if(root->right)
    {
        ans += DFS(root->right->left);
        ans += DFS(root->right->right);
    }
    
    return max(l+r,ans+1);
}

int LISS(struct Node *root)
{
    int ans = DFS(root);
    
    return ans;
}