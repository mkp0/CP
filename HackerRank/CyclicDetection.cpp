

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode *head)
{

    SinglyLinkedListNode *slow = head;
    SinglyLinkedListNode *fast = head->next;
    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        if (slow == fast)
            return true;

        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}
