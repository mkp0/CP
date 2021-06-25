class Solution
{
public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        int ans = INT_MAX;
        while (high >= low)
        {
            int mi = (high + low) / 2;
            if (arr[mi] < arr[high])
            {
                ans = min(ans, arr[mi]);
                high = mi - 1;
            }
            else
            {
                ans = min(ans, arr[low]);
                low = mi + 1;
            }
        }

        return ans;
    }
};