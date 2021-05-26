class Solution{
  public:
    // Return the Kth smallest element in the given BST 
    int inorder(Node* root,int& k,int &ans)
    {
        if(!root)
        return 0;
        
        int l = inorder(root->left,k,ans);
        k--;
        if(k==0)
        {
            ans = root->data;
        }
        int r = inorder(root->right,k,ans);
        
        return l+r+1;
    }
    
    int KthSmallestElement(Node *root, int k)
    {
        int ans = -1;
        
        inorder(root,k,ans);
        
        return ans;
    }
};