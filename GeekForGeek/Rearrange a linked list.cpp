/* Node structure

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
    void rearrangeEvenOdd(Node *head)
    {
        if (!head || !head->next)
            return;

        Node *odd = head;

        Node *even = new Node(-1);

        Node *ans = even; // gonna used to merge odd even
        // o  e  start
        // o    e
        // 1 2 NN
        while (odd && odd->next)
        {
            even->next = odd->next;
            even = even->next;
            if (!odd->next->next)
            {
                odd->next = NULL;
                odd->next = ans->next;
                return;
            }
            odd->next = odd->next->next;
            odd = odd->next;
        }

        even->next = NULL;

        odd->next = ans->next;
    }
};
