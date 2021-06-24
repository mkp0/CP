/* node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

//Function to construct binary tree from parent array.

Node *createTree(int par[], int N)
{
    map<int, Node *> m;

    for (int i = 0; i < N; i++)
    {
        m[i] = new Node(i);
    }

    Node *root = NULL;

    for (int i = 0; i < N; i++)
    {
        if (par[i] == -1)
        {
            root = m[i];
        }
        else
        {
            if (!m[par[i]]->left)
            {
                m[par[i]]->left = m[i];
            }
            else
            {
                m[par[i]]->right = m[i];
            }
        }
    }

    return root;
}