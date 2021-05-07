/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
void sortList(Node** head)
{
    Node* temp = (*head);
    
    if(!temp)
    return;
    
    Node* x = temp;
    
    while(temp && temp->next)
    {
        while(temp->next && temp->next->data<0)
        {
            auto y = temp->next;
            temp->next = temp->next->next;
            y->next = x;
            x = y;
        }
        if(temp)
        temp = temp->next;
    }
    
    (*head) = x;
}