class Solution
{
public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if (!head || !head->next)
            return true;

        if (!head->next->next)
        {
            return head->data == head->next->data;
        }
        auto slow = head;
        auto fast = head;

        bool is = false;
        bool odd = true;

        while (fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            is = true;
        }

        if (is && fast->next)
        {
            slow = slow->next;
            odd = false;
        }

        // reverse
        Node *prev = slow;
        Node *curr = head;
        Node *next;

        while (curr != slow)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;

        auto y = slow;

        if (odd)
        {
            y = slow->next;
        }

        auto x = head;

        while (x != slow)
        {
            if (x->data != y->data)
            {
                return false;
            }
            x = x->next;
            y = y->next;
        }

        return true;
    }
};