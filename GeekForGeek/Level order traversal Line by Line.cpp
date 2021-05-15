/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node *node)
{
    vector<vector<int>> ans;

    if (!node)
        return ans;

    queue<Node *> q;
    q.push(node);

    while (!q.empty())
    {
        queue<Node *> q1;

        vector<int> temp;

        while (!q.empty())
        {
            temp.push_back(q.front()->data);
            if (q.front()->left)
            {
                q1.push(q.front()->left);
            }
            if (q.front()->right)
            {
                q1.push(q.front()->right);
            }
            q.pop();
        }

        q = q1;
        ans.push_back(temp);
    }

    return ans;
}