class Solution
{
public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return;
        Node *slow = head->next;
        Node *fast = head->next->next;

        while (fast && fast->next)
        {
            if (slow == fast)
            {
                break;
            }
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast == slow)
        {
            slow = head;

            if (slow == fast)
            {
                while (fast->next != slow)
                {
                    fast = fast->next;
                }
            }
            else
            {
                while (slow->next != fast->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
            fast->next = NULL;
        }
    }
};