/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

class Solution
{
public:
    Node *merge(Node *one, Node *two)
    {
        Node *ans = new Node(-1);
        Node *head = ans;

        while (one && two)
        {
            if (one->data < two->data)
            {
                head->next = one;
                one = one->next;
            }
            else
            {
                head->next = two;
                two = two->next;
            }
            head = head->next;
        }

        if (one)
            head->next = one;
        if (two)
            head->next = two;

        return ans->next;
    }

    Node *getMiddle(Node *head)
    {
        if (!head)
            return head;

        Node *slow = head;
        Node *fast = head->next;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    Node *mergeSort(Node *head)
    {
        if (!head || !head->next)
            return head;

        Node *lhalf = head;
        Node *mid = getMiddle(head);
        Node *rhalf = mid->next;
        mid->next = NULL;

        lhalf = mergeSort(lhalf);
        rhalf = mergeSort(rhalf);

        return merge(lhalf, rhalf);
    }
};