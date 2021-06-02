/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node *findIntersection(Node *head1, Node *head2)
{
    auto pt1 = head1;
    auto pt2 = head2;
    Node *ans = new Node(-1);

    auto temp = ans;

    while (pt1 && pt2)
    {
        if (pt1->data == pt2->data)
        {
            temp->next = new Node(pt1->data);
            temp = temp->next;
            pt1 = pt1->next;
            pt2 = pt2->next;
        }
        else if (pt1->data > pt2->data)
        {
            pt2 = pt2->next;
        }
        else
        {
            pt1 = pt1->next;
        }
    }

    return ans->next;
}