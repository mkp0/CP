class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        
        vector<int> last(26,-1);
        
        for(int i = 0; i < n ;i++)
        {
            last[s[i]-'a'] = i;
        }
        
        vector<int> ans;
        
        for(int i = 0; i < n ;i++)
        {
            int lost = last[s[i]-'a'];
            int j = i;
            
            while(j != lost)
            {
                j++;
                lost = max(lost,last[s[j]-'a']);
            }
            
            ans.push_back(j-i+1);
            i = j;
        }
        
        return ans;
    }
};