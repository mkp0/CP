void printOddNodes(Node *root)
{
    if (!root)
    {
        cout << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    int lev = 0;
    while (!q.empty())
    {
        lev++;
        queue<Node *> q1;

        while (!q.empty())
        {
            auto x = q.front();
            q.pop();
            if (lev % 2)
                cout << x->data << " ";
            if (x->left)
                q1.push(x->left);
            if (x->right)
                q1.push(x->right);
        }
        q = q1;
    }
    cout << endl;
}