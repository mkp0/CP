class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int rep = 0,miss=0;
        for(int i = 0 ; i < n ;i++)
        {
            int x = abs(arr[i]);
        
            if(arr[x-1]>0)
            {
                arr[x-1] = -arr[x-1];
            }else{
                rep = x;
            }
        }
        
        for(int i = 0 ; i < n ;i++)
        {
            if(arr[i]>0)
            {
                miss = i+1;
                break;
            }
        }
        
        int* ans;
        ans[0] = rep;
        ans[1] = miss;
        
        return ans;
    }
};