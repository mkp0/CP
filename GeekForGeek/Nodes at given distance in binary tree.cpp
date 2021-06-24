/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:
public:
    void kDistanceChild(Node *root, int k, vector<int> &ans)
    {
        if (!root)
            return;

        if (k == 0)
        {
            ans.push_back(root->data);
            return;
        }
        kDistanceChild(root->left, k - 1, ans);
        kDistanceChild(root->right, k - 1, ans);
    }

    int helper(Node *root, int target, int k, vector<int> &ans)
    {
        if (!root)
        {
            return -1;
        }

        if (root->data == target)
        {
            kDistanceChild(root, k, ans);
            return 1;
        }

        int l = helper(root->left, target, k, ans);
        if (l == k)
        {
            ans.push_back(root->data);
            return -1;
        }
        if (l != -1)
        {
            kDistanceChild(root->right, k - l - 1, ans);
            return l + 1;
        }
        int r = helper(root->right, target, k, ans);
        if (r == k)
        {
            ans.push_back(root->data);
            return -1;
        }
        if (r != -1)
        {
            kDistanceChild(root->left, k - r - 1, ans);
            return r + 1;
        }
        return -1;
    }

    vector<int> KDistanceNodes(Node *root, int target, int k)
    {
        vector<int> ans;

        helper(root, target, k, ans);

        sort(ans.begin(), ans.end());

        return ans;
    }
};