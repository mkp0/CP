/* Structure for tree and linked list

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution
{
    public: 
    
    void convertion(Node *root,Node* &head,Node* &prev)
    {
        if(!root)
        return;
        
        convertion(root->left,head,prev);
        
        if(!prev)
        head = root;
        else{
            prev->right = root;
            root->left = prev;
        }
        
        prev = root;
        
        convertion(root->right,head,prev);
    }
    
    
    Node * bToDLL(Node *root)
    {
        Node* head = nullptr;
        Node* prev = nullptr;
        
        convertion(root,head,prev);
        
        return head;
    }
};