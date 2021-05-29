/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.

Node *build(int in[], int post[], int st, int ed, int &pos)
{
    if (st > ed || pos < 0)
    {
        return nullptr;
    }

    auto root = new Node(post[pos]);

    int i = st;
    for (i = st; i <= ed; i++)
    {
        if (in[i] == post[pos])
        {
            break;
        }
    }

    pos--;

    root->right = build(in, post, i + 1, ed, pos);
    root->left = build(in, post, st, i - 1, pos);

    return root;
}

Node *buildTree(int in[], int post[], int n)
{

    int pos = n - 1;
    return build(in, post, 0, n - 1, pos);
}