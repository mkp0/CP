/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node *sortedMerge(Node *a, Node *b)
{
    Node *ans = new Node(-1);
    Node *anss = ans;

    while (a && b)
    {
        if (a->data < b->data)
        {
            anss->next = a;
            a = a->next;
        }
        else
        {
            anss->next = b;
            b = b->next;
        }
        anss = anss->next;
    }

    if (a)
    {
        anss->next = a;
    }
    else if (b)
    {
        anss->next = b;
    }

    return ans->next;
}