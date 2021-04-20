/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */


class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       if(!root)return;
       
       queue<Node*> q;
       q.push(root);
       
       while(!q.empty())
       {
           Node* prev = NULL;
           queue<Node*> q1;
           
           while(!q.empty())
           {
               Node* u = q.front();
               q.pop();
               
               if(u->right)
               q1.push(u->right);
               if(u->left)
               q1.push(u->left);
               
               u->nextRight = prev;
               prev = u;
               
           }
           q = q1;
       }
    }    
      
};