/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec
{
public:
    // Encodes a tree to a single string.

    void preorder(TreeNode *root, string &ans)
    {
        if (!root)
        {
            ans += "null,";
            return;
        }
        ans += to_string(root->val) + ",";

        preorder(root->left, ans);

        preorder(root->right, ans);
    }

    string serialize(TreeNode *root)
    {
        string ans;

        preorder(root, ans);

        return ans;
    }

    // Decodes your encoded data to tree.

    TreeNode *helper(queue<string> &q)
    {
        if (!q.size())
            return nullptr;

        if (q.front() == "null")
        {
            q.pop();
            return nullptr;
        }

        int x = stoi(q.front());
        q.pop();

        TreeNode *root = new TreeNode(x);

        root->left = helper(q);
        root->right = helper(q);

        return root;
    }

    TreeNode *deserialize(string data)
    {
        queue<string> q;

        string temp = "";
        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] == ',')
            {
                q.push(temp);
                temp = "";
            }
            else
            {
                temp += data[i];
            }
        }

        return helper(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));