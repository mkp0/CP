/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// Returns true if the nodes with values 'a' and 'b' are cousins. Else returns false
int pa, pb, la, lb;
void is(Node *root, int a, int b, int le)
{
    if (!root)
        return;

    if (root->data == a)
    {
        la = le;
    }
    if (root->data == b)
    {
        lb = le;
    }
    if ((root->left && (root->left->data == a)) || (root->right && (root->right->data == a)))
    {
        pa = root->data;
    }
    if ((root->left && (root->left->data == b)) || (root->right && (root->right->data == b)))
    {
        pb = root->data;
    }

    is(root->left, a, b, le + 1);
    is(root->right, a, b, le + 1);
}

bool isCousins(Node *root, int a, int b)
{
    if (!root)
        return false;

    pa = pb = -1;
    la = lb = -1;

    is(root, a, b, 0);

    if ((la == lb) && (pa != pb))
    {
        return true;
    }
    return false;
}