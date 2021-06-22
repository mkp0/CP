class Solution {
public:
    
    bool dfs(int src,vector<int>& colour,int col,vector<int> g[])
    {
        colour[src] = col;
        
        for(auto &x : g[src])
        {
            if(!colour[x])
            {
                if(dfs(x,colour,-col,g))
                    return true;
            }else if(colour[x]==col)
            {
                return true;
            }
        }
        
        return false;
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> g[n+1];
        vector<int> colour(n+1,0);
        
        for(auto &x : dislikes)
        {
            g[x[0]].push_back(x[1]);
            g[x[1]].push_back(x[0]);
        }
        
        for(int i = 1; i <= n;i++)
        {
            if(!colour[i] && dfs(i,colour,1,g))
            {
                return false;
            }
        }
        
        return true;
        
    }
};