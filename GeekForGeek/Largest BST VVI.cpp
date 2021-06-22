/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

/*You are required to complete this method */
// Return the size of the largest sub-tree which is also a BST

struct node
{
    int size = 0;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    bool isbst = true;
};

int ans = 0;
node *solve(Node *root)
{
    node *cur = new node();
    if (root == NULL)
        return cur;
    node *l = solve(root->left);
    node *r = solve(root->right);

    if (l->isbst && r->isbst && root->data > l->maxi && root->data < r->mini)
    {
        cur->size = l->size + r->size + 1;
        ans = max(ans, cur->size);
    }
    else
    {
        cur->size = 0;
        cur->isbst = false;
    }
    cur->mini = min(l->mini, root->data);
    cur->maxi = max(r->maxi, root->data);

    return cur;
}
int largestBst(Node *root)
{
    ans = 0;
    node *cur = solve(root);
    return ans;
}