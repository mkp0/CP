/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
public:
    node *rev(node *head)
    {
        node *pre = nullptr;
        node *next;
        node *cur = head;

        while (cur)
        {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }

        return pre;
    }

    node *reverse(struct node *head, int k)
    {
        if (!head)
            return head;

        node *ans = head;
        int kk = k;

        while (--kk)
        {
            head = head->next;
            if (!head)
                return rev(ans);
        }

        node *next = head->next;
        head->next = nullptr;

        ans = rev(ans);
        head = ans;

        while (head->next)
            head = head->next;

        head->next = reverse(next, k);

        return ans;
    }
};