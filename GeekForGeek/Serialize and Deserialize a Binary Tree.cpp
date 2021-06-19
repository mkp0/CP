class Solution
{
public:
    void yo(Node *root, vector<int> &ans)
    {
        if (!root)
        {
            ans.push_back(-1);
            return;
        }
        ans.push_back(root->data);
        yo(root->left, ans);
        yo(root->right, ans);
    }

    vector<int> serialize(Node *root)
    {
        vector<int> ans;

        yo(root, ans);

        return ans;
    }

    Node *deserial(vector<int> &A, int &st)
    {
        if (st == A.size())
        {
            return NULL;
        }
        if (A[st] == -1)
        {
            st++;
            return NULL;
        }

        Node *root = new Node(A[st++]);
        root->left = deserial(A, st);
        root->right = deserial(A, st);

        return root;
    }

    Node *deSerialize(vector<int> &A)
    {
        int st = 0;
        Node *root = deserial(A, st);

        return root;
    }
};