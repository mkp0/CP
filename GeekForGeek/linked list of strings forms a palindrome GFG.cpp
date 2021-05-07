/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

bool ispali(string s)
{
    int n = s.size();
    
    for(int i = 0 ; i < n/2 ; i++)
    {
        if(s[i]!=s[n-1-i])
        {
            return false;
        }
    }
    return true;
}

bool compute(Node* root)
{
   string s;
   
   while(root)
   {
       s += root->data;
       root = root->next;
   }
   
   return ispali(s);
}