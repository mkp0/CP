class Solution {
public:
    
    int calhist(vector<int>& hist)
    {
        stack<int> st;
        int ans = 0;
        
        for(int i = 0; i < hist.size();)
        {
            if(st.empty() || hist[st.top()]<=hist[i])
            {
                st.push(i++);
            }else{
                int y = hist[st.top()];
                st.pop();
                
                int x = i;
                if(!st.empty())
                    x-=st.top()+1;
                
                ans = max(ans,x*y);
            }
        }
        
        while(!st.empty())
        {
            int y = hist[st.top()];
            st.pop();
            
            int x = hist.size();
            
            if(!st.empty())
                    x-=st.top()+1;
            
            ans = max(ans,x*y);            
        }
        
        return ans;
    }
     
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(!m)
            return 0;
        int n = matrix[0].size();
        int ans = 0;
        vector<int> histo(n);
        
        for(int i = 0; i < m ; i++)
        {
            for(int j = 0; j < n ;j++)
            {
                if(matrix[i][j]=='1')
                    histo[j] += 1;
                else 
                    histo[j] = 0;
            }
            
            ans = max(ans,calhist(histo));
        }
        
        return ans;
    }
};