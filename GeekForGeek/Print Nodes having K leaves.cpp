/*The Node is defined as follows:
struct Node
{
    int data ;
    struct Node * left, * right ;
};
*/

class Solution
{
public:
    /*You are required to complete below method */

    int postorder(Node *root, int k, vector<int> &ans)
    {
        if (!root)
            return 0;

        if (!root->left && !root->right)
            return 1;

        int lh = postorder(root->left, k, ans);
        int rh = postorder(root->right, k, ans);

        if (lh + rh == k)
        {
            ans.push_back(root->data);
        }

        return lh + rh;
    }

    vector<int> btWithKleaves(Node *ptr, int k)
    {
        vector<int> ans;

        postorder(ptr, k, ans);

        if (ans.empty())
            ans.push_back(-1);
        return ans;
    }
};
