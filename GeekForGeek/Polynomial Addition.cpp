/* Structure of Node used
struct Node
{
    int coeff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
    
};
*/

class Solution
{
public:
    /* The below method print the required sum of polynomial
    p1 and p2 as specified in output  */
    Node *addPolynomial(Node *p1, Node *p2)
    {
        if (!p1)
            return p2;
        if (!p2)
            return p1;

        Node *ans = new Node(0, 0);
        Node *head = ans;

        while (p1 && p2)
        {
            if (p1->pow > p2->pow)
            {
                head->next = p1;
                p1 = p1->next;
            }
            else if (p2->pow > p1->pow)
            {
                head->next = p2;
                p2 = p2->next;
            }
            else
            {
                head->next = p1;
                head->next->coeff += p2->coeff;
                p1 = p1->next;
                p2 = p2->next;
            }
            head = head->next;
        }

        if (p1)
        {
            head->next = p1;
        }

        if (p2)
        {
            head->next = p2;
        }

        return ans->next;
    }
};