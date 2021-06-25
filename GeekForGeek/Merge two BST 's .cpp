/*
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
class Solution
{
public:

    void inorder(Node* root, vector<int> &ans)
    {
        if (!root)return;

        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }

    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int> ans;

        stack<Node*> s1, s2;

        if (!root1)
        {
            inorder(root2, ans);
            return ans;
        }
        if (!root2)
        {
            inorder(root1, ans);
            return ans;
        }

        while (root1 || root2 || !s1.empty() || !s2.empty())
        {
            if (root1 || root2)
            {
                while (root1)
                {
                    s1.push(root1);
                    root1 = root1->left;
                }
                while (root2)
                {
                    s2.push(root2);
                    root2 = root2->left;
                }
            } else {
                if (s1.empty())
                {
                    while (!s2.empty())
                    {
                        s2.top()->left = nullptr;
                        inorder(s2.top(), ans);
                        s2.pop();
                    }
                    return ans;
                }
                if (s2.empty())
                {
                    while (!s1.empty())
                    {
                        s1.top()->left = nullptr;
                        inorder(s1.top(), ans);
                        s1.pop();
                    }
                    return ans;
                }

                root1 = s1.top();
                root2 = s2.top();

                if (root1->data < root2->data)
                {
                    ans.push_back(root1->data);
                    root1 = root1->right;
                    root2 = nullptr;
                    s1.pop();
                }
                else
                {
                    ans.push_back(root2->data);
                    root2 = root2->right;
                    root1 = nullptr;
                    s2.pop();
                }
            }
        }

        return ans;
    }
};