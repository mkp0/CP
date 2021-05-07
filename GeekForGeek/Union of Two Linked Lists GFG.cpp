/*
// structure of the node is as follows

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    Node* ans = new Node(-1);
    Node* woo = ans;
    set<int> temp;
    
    while(head1)
    {
        temp.insert(head1->data);
        head1 = head1->next;
    }
    
    while(head2)
    {
        temp.insert(head2->data);
        head2 = head2->next;
    }
    
    for(auto x : temp)
    {
        ans->next = new Node(x);
        ans = ans->next;
    }
    
    return woo->next;
}