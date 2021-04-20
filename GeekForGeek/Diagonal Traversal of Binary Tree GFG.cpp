/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

map<int,vector<int>> m;

void DFS(Node* root, int co)
{
    if(!root)return;
    m[co].push_back(root->data);
    DFS(root->left,co+1);
    DFS(root->right,co);
}

vector<int> diagonal(Node *root)
{
  m.clear();
   DFS(root,0);
   vector<int> ans;
   
   for(auto x : m)
   {
       for(auto y : x.second)
       {
           ans.push_back(y);
       }
   }
   
   return ans;
}