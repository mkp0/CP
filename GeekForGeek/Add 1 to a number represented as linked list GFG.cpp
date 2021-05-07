/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        if(!head)
        return new Node(1);
        Node *fi;
        Node* root = head;
        fi = NULL;
        
        while(head)
        {
            if(head->data<9)
            {
                fi = head;
            }
            head = head->next;
        }
        
        if(fi)
        {
            fi->data = fi->data+1;
            
            fi = fi->next;
            
            while(fi)
            {
                fi->data = 0;
                fi = fi->next;
            }
            return root;
        }
        fi = new Node(1);
        fi->next = root;
        root = fi;
        fi = fi->next;
         while(fi)
            {
                fi->data = 0;
                fi = fi->next;
            }
            return root;
    }
};