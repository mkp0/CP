class Solution
{
    public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        deque<int> buffer;
        
        for(int i = 0 ; i < n ; i++)
        {
            while((!buffer.empty())&&arr[i]>arr[buffer.back()])
            buffer.pop_back();
            
            buffer.push_back(i);
            
            if(i>=k-1)
            ans.push_back(arr[buffer.front()]);
            
            if((i+1-buffer.front())==k)
            buffer.pop_front();
            
        }
        
        return ans;
    }
};