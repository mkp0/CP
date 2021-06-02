/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
    if (!head)
        return -1;

    auto forw = head;
    auto back = head;

    for (int i = 1; i < n; i++)
    {
        forw = forw->next;
        if (!forw)
            return -1;
    }

    while (forw->next)
    {
        forw = forw->next;
        back = back->next;
    }

    return back->data;
}