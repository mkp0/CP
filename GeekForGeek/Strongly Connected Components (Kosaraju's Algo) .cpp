class Solution
{
	public:
	vector<bool> vis;
	vector<int> order;
	int dfs1(int src,vector<int> g[])
	{
	    vis[src]=true;
	    for(auto x : g[src])
	    {
	        if(!vis[x])
	        {
	            dfs1(x,g);
	        }
	    }
	    order.push_back(src);
	}
	
	int dfs2(int src,vector<int> rg[])
	{
	    vis[src]=true;
	    for(auto x : rg[src])
	    {
	        if(!vis[x])
	        {
	            dfs2(x,rg);
	        }
	    }
	}
	
	
    int kosaraju(int v, vector<int> g[])
    {
        vector<int> rg[v];
        for(int i = 0 ; i < v ; i++)
        {
            for(auto x : g[i])
            {
                rg[x].push_back(i);
            }
        }
        
        vis.assign(v,false);
        for(int i = 0 ;i < v; i++)
        {
            if(!vis[i])
            {
                
                dfs1(i,g);
            }
        }
        
        reverse(order.begin(),order.end());
        int comp = 0;
        vis.assign(v,false);
        
        for(auto x : order)
        {
            if(!vis[x])
            {
                comp++;
                dfs2(x,rg);
            }
        }        
        
        return comp;
        
    }
};