/* Function to print corner node at each level */

/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
void printCorner(Node *root)
{
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        queue<Node *> q1;

        auto x = q.front();
        q.pop();
        cout << x->data << " ";
        if (x->left)
            q1.push(x->left);
        if (x->right)
            q1.push(x->right);

        while (!q.empty())
        {
            if (q.size() == 1)
            {
                cout << q.front()->data << " ";
            }
            x = q.front();
            q.pop();
            if (x->left)
                q1.push(x->left);
            if (x->right)
                q1.push(x->right);
        }

        q = q1;
    }
}