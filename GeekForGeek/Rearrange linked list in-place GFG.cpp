/*

The structure of linked list is the following

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
Node* midPt(Node *root)
{
    if(!root)return root;
    
    Node* fa = root;
    Node* sl = root;
    
    while(fa->next && fa->next->next)
    {
        sl = sl->next;
        fa = fa->next->next;
    }
    return sl;
}

Node* ReverseLL(Node* root)
{
    if(!root)
    return root;
    
    Node* next = root;
    Node* prev = nullptr;
    Node* cur = root;
    
    while(cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}


Node *inPlace(Node *root)
{
    if(!root)
    return root;
    
    Node* mi = midPt(root);
    Node* temp = mi->next;
    
    mi->next = nullptr;
    mi = temp;
    
    mi = ReverseLL(mi);
    
    Node* sl = root;
    
    while(sl && sl->next)
    {
        Node* temp1 = sl->next;
        Node* temp2 = mi->next;
        sl->next = mi;
        mi->next = temp1;
        mi = temp2;
        sl = temp1;
    }
    
    if(mi)
    sl->next = mi;
    
    return root;
}