/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root)return ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            queue<Node*> q1;
            vector<int> temp;
            while(!q.empty())
            {
                auto u = q.front();
                q.pop();
                temp.push_back(u->val);
                for(auto x : u->children)
                {
                    if(x)
                    {
                        q1.push(x);
                    }
                }
            }
            q = q1;
            ans.push_back(temp);
        }
        return ans;
    }
};