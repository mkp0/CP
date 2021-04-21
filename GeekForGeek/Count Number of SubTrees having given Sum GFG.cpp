//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
//Function to count number of subtrees having sum equal to given sum.
int DFS(Node* root,int& x , int& ans)
{
    if(!root)return 0;
    int l = DFS(root->left,x,ans);
    int r = DFS(root->right,x,ans);
    
    int su = l+r+root->data;
    
    if(su==x)
    {
        ans++;
    }
    return su;
}


int countSubtreesWithSumX(Node* root, int x)
{
    int ans = 0;
    DFS(root,x,ans);
    return ans;
}