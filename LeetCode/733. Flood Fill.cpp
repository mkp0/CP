class Solution {
public:
    vector<vector<bool>>vis;
    void dfs(vector<vector<int>>& image,int sr,int sc,int newColor)
    {
        if(sr<0 || sc < 0 || sr>= image.size() || sc >= image[0].size() || vis[sr][sc])
        {
            return;
        }
        vis[sr][sc] = true;
        if(sc+1<image[0].size() && image[sr][sc]==image[sr][sc+1])
        {
            dfs(image,sr,sc+1,newColor);
        }
        if(sr+1<image.size() && image[sr][sc]==image[sr+1][sc])
        {
            dfs(image,sr+1,sc,newColor);
        }
        if(sc-1>=0 && image[sr][sc]==image[sr][sc-1])
        {
            dfs(image,sr,sc-1,newColor);
        }
        if(sr-1>=0 && image[sr][sc]==image[sr-1][sc])
        {
            dfs(image,sr-1,sc,newColor);
        }
        image[sr][sc] = newColor; 
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vis.resize(image.size(),vector<bool>(image[0].size(),false));
        dfs(image,sr,sc,newColor);
        
        return image;
    }
};