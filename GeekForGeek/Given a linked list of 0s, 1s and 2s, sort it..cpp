/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
       if(!head)
       return head;
       
       Node * z = new Node(1),*o = new Node(1),*t = new Node(1);
       Node * z1 = z,*o1 = o,*t1 = t;
       
       while(head)
       {
           if(head->data == 1)
           {
               o->next = head;
               o = o->next;
           }
           if(head->data == 0)
           {
               z->next = head;
               z = z->next;
           }
           if(head->data == 2)
           {
               t->next = head;
               t = t->next;
           }
           auto temp = head->next;
           head->next = nullptr;
           head = temp;
       }
       
       z->next = o1->next;
       if(!o1->next)
       {
           z->next = t1->next;
       }
       o->next = t1->next;
       
       if(z1->next)
       return z1->next;
       if(o1->next)
       return o1->next;
       
       
       return t1->next;
        
    }
};