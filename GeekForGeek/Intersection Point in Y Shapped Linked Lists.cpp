/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node *head1, Node *head2)
{
    Node *one = head1;
    Node *two = head2;

    while (one || two)
    {
        if (one == two)
        {
            if (one == NULL)
                return -1;
            return one->data;
        }

        one = one->next;
        two = two->next;

        if (!one)
            one = head2;
        if (!two)
            two = head1;
    }

    return -1;
}