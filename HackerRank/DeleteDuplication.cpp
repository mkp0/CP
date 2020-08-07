

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *head)
{

    auto temp = head;

    while (temp->next)
    {
        if ((temp->data) == (temp->next->data))
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}
