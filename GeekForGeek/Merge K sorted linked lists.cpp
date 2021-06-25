/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    //Function to merge K sorted linked list.
    
    struct comp
    {
        bool operator()(Node* &a,Node* &b)
        {
            return a->data>b->data;
        }
    };
    
    Node * mergeKLists(Node *arr[], int k)
    {
        Node* ans = new Node(-1);
        Node* head = ans;
        priority_queue<Node*,vector<Node*>,comp> pq;
        
        for(int i = 0; i < k ;i++)
        {
            if(arr[i])
            pq.push(arr[i]);
        }
        
        while(!pq.empty())
        {
            Node *temp = pq.top();
            pq.pop();
            
            head->next = temp;
            head = head->next;
            
            if(temp->next)
            {
                pq.push(temp->next);
            }
        }
        return ans->next;
    }
};