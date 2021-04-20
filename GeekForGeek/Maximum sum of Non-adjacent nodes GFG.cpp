//Node Structure
/*struct Node
{
	int key;
	Node *left, *right;
};*/

//Function to return the maximum sum of non-adjacent nodes.
int DFS(Node* root)
{
    if(!root)return 0;
    
    int l = DFS(root->left);
    int r = DFS(root->right);
    
    int ans = root->data;
    
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
    
    return max(ans,l+r);
}

int getMaxSum(Node *root) 
{
    return DFS(root);
}
