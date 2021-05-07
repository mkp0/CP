Node* reverseDLL(Node * head)
{
        if(!head)
        return head;
        
        Node* cur = head;
        Node* next = head->next;
        Node* prev = NULL;
        
        while(cur)
        {
            next = cur->next;
            cur->next = prev;
            cur->prev = next;
            prev = cur;
            cur = next;
        }
        
        return prev;
    
}