class Solution {
public:
    
    void dfs(int src ,vector<vector<int>>& rooms , vector<bool>& vis)
    {
        if(vis[src])
        {
            return;
        }
        vis[src] = true;
        
        for(auto x: rooms[src])
        {
            dfs(x,rooms,vis);
        }
        
    }
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        vector<bool> vis(rooms.size(),false);
        dfs(0,rooms,vis);
        
        for(int i = 1 ; i < rooms.size();i++)
        {
            if(!vis[i])return false;
        }
        return true;
    }
};