/*Complete the function below
Node is as follows
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
    void leftt(Node *root, stack<Node *> &s)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }
    }
    void rightt(Node *root, stack<Node *> &s)
    {
        while (root)
        {
            s.push(root);
            root = root->right;
        }
    }

    int isPairPresent(Node *root, int target)
    {
        if (!root)
            return 0;

        stack<Node *> s1, s2;
        leftt(root, s1);
        rightt(root, s2);

        while (!s1.empty() && !s2.empty() && s1.top()->data < s2.top()->data)
        {
            int x = s1.top()->data;
            int y = s2.top()->data;
            if (x + y == target)
            {
                return 1;
            }
            else if (x + y > target)
            {
                Node *temp = s2.top();
                s2.pop();
                rightt(temp->left, s2);
            }
            else
            {
                Node *temp = s1.top();
                s1.pop();
                leftt(temp->right, s1);
            }
        }

        return 0;
    }
};