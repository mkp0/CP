/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/
Node *sortedMerge(Node *a, Node *b)
{
    Node *ans = new Node(-1);
    Node *anss = ans;

    while (a && b)
    {
        if (a->data < b->data)
        {
            anss->bottom = a;
            a = a->bottom;
        }
        else
        {
            anss->bottom = b;
            b = b->bottom;
        }
        anss = anss->bottom;
    }

    if (a)
    {
        anss->bottom = a;
    }
    else if (b)
    {
        anss->bottom = b;
    }

    return ans->bottom;
}

Node *flatten(Node *root)
{
    if (!root)
        return nullptr;

    Node *next = root->next;
    root->next = nullptr;

    Node *temp = flatten(next);

    return sortedMerge(temp, root);
}