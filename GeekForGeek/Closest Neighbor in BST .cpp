//User function Template for C++
/*
Structure of the Node of the BST is as
struct Node {
	int key;
	Node* left, *right;
};
*/
/*
   'N' is the element 
   'size' is the total element in BST
  */

void find(Node *root, int N, int &ans)
{
    if (!root)
        return;

    if (root->key <= N)
    {
        ans = root->key;
        find(root->right, N, ans);
        return;
    }
    else
    {
        find(root->left, N, ans);
    }
}

int findMaxForN(Node *root, int N)
{
    int ans = -1;

    find(root, N, ans);

    return ans;
}