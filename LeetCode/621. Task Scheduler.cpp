class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int sz = tasks.size();
        
        int maxi = INT_MIN;
        int maxico = 0;
        int arr[26] = {0};
        
        for(int i = 0; i < sz ;i++)
        {
            arr[tasks[i]-'A']++;
        }
        
        for(int i = 0; i < 26 ;i++)
        {
            maxi = max(maxi,arr[i]);
        }
        
        for(int i = 0;i < 26 ;i++)
        {
            maxico += (maxi==arr[i]);
        }
        
        return max(sz,(maxi-1)*(n+1)+maxico);      
        
    }
};