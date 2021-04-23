/*
Node structure is as follows:
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
// modify the BST and return its root
void DFS(Node* root,int &su)
{
    if(!root)return;
    DFS(root->right,su);
    su += root->data;
    root->data = su;
    DFS(root->left,su);
    return;
}

Node* modify(Node *root)
{
    int su = 0;
    DFS(root,su);
    return root;
}