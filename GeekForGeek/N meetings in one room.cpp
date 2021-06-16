class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        pair<int,int> arr[n];
        
        for(int i = 0; i < n ;i++)
        {
            arr[i].first = end[i];
            arr[i].second = start[i];
        }
        
        sort(arr,arr + n);
        
        int cnt = 0;
        int last = 0;
        
        for(int i = 0; i < n ;i++)
        {
            if(arr[i].second>last)
            {
                cnt++;
                last = arr[i].first;
            }
        }
        
        return cnt;
    }
};