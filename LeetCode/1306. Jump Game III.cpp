class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int> q;
        int n = arr.size();
        vector<int> vis(n,false);
        q.push(start);
        
        while(!q.empty())
        {
            auto x = q.front();
            q.pop();
            vis[x] = true;
            if(arr[x] == 0)
                return true;
            if(x+arr[x]<n && !vis[x+arr[x]])
                q.push(x+arr[x]);
            if(x-arr[x]>=0 && !vis[x-arr[x]])
                q.push(x-arr[x]);
        }
        
        return false;
    }
};