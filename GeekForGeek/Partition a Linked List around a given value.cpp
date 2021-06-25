// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

Node *partition(struct Node *head, int x)
{
    Node *ans = new Node(-1);
    Node *h1 = ans;
    Node *temp2 = new Node(-1);
    Node *h2 = temp2;
    Node *temp3 = new Node(-1);
    Node *h3 = temp3;

    while (head)
    {
        if (head->data < x)
        {
            h1->next = head;
            h1 = h1->next;
        }
        else if (head->data == x)
        {
            h2->next = head;
            h2 = h2->next;
        }
        else
        {
            h3->next = head;
            h3 = h3->next;
        }
        head = head->next;
    }
    h3->next = nullptr;
    h2->next = temp3->next;
    h1->next = temp2->next;

    return ans->next;
}