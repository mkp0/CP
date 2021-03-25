class Solution {
public:    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> g(numCourses);
        vector<int> indeg(numCourses);
        for(auto x : prerequisites)
        {
            g[x[1]].push_back(x[0]);
            indeg[x[0]]++;
        }
        vector<int> canTake;
        for(int i = 0 ; i < numCourses ; i++)
        {
            if(!indeg[i])
                canTake.push_back(i);
        }  
        
        for(int i = 0 ; i < canTake.size();i++)
        {
            for(auto x: g[canTake[i]])
            {
                --indeg[x];
                if(indeg[x] == 0)
                {
                    canTake.push_back(x);
                }
            }
        }
        return (canTake.size()==numCourses);
    }
};