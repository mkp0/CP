/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution
{
public:
    int lenn = 0;

    Node *build(int in[], int pre[], int st, int ed, int &pos)
    {
        if ((pos >= lenn) || (st > ed))
        {
            return nullptr;
        }

        auto root = new Node(pre[pos]);

        int i = st;

        for (i = st; i <= ed; i++)
        {
            if (pre[pos] == in[i])
            {
                break;
            }
        }

        pos++;
        root->left = build(in, pre, st, i - 1, pos);
        root->right = build(in, pre, i + 1, ed, pos);

        return root;
    }

    Node *buildTree(int in[], int pre[], int n)
    {
        int pos = 0;
        lenn = n;
        return build(in, pre, 0, n - 1, pos);
    }
};