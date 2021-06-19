class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    void dfs(int i,int j,vector<vector<int>>& grid,int& cnt)
    {
        if(i<0 || j<0 || i>= grid.size() || j>= grid[0].size() || !grid[i][j])
        return;
        grid[i][j] = 0;
        cnt++;
        dfs(i-1,j,grid,cnt);
        dfs(i+1,j,grid,cnt);
        dfs(i,j+1,grid,cnt);
        dfs(i,j-1,grid,cnt);
        dfs(i+1,j+1,grid,cnt);
        dfs(i-1,j+1,grid,cnt);
        dfs(i+1,j-1,grid,cnt);
        dfs(i-1,j-1,grid,cnt);
    }
    
    int findMaxArea(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;
        for(int i = 0 ; i < n ;i++)
        {
            for(int j = 0 ; j < m ;j++)
            {
                int cnt = 0;
                dfs(i,j,grid,cnt);
                ans = max(ans,cnt);
            }
        }
        
        return ans;
    }
};