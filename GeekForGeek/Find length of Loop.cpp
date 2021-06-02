/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    Node *slow = head;
    Node *fast = head;

    int co = 0;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = slow->next;
            co++;
            while (slow != fast)
            {
                slow = slow->next;
                co++;
            }
            return co;
        }
    }

    return 0;
}