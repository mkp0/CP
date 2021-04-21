class Solution
{
public:
    // Return True if the given trees are isomotphic. Else return False.
    bool DFS1(Node *r1, Node *r2)
    {
        if (!r1 && !r2)
            return true;
        if (!r1 || !r2)
            return false;

        if (r1->data != r2->data)
            return false;
        return DFS1(r1->left, r2->left) && DFS1(r1->right, r2->right);
    }

    bool DFS2(Node *r1, Node *r2)
    {
        if (!r1 && !r2)
            return true;
        if (!r1 || !r2)
            return false;

        if (r1->data != r2->data)
            return false;
        return DFS2(r1->left, r2->right) && DFS2(r1->right, r2->left);
    }

    bool isIsomorphic(Node *root1, Node *root2)
    {
        return DFS1(root1, root2) || DFS2(root1, root2);
    }
};