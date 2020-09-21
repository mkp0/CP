class Solution
{
public:
    int findMaximum(int arr[], int n)
    {
        int ans = 0;
        if (arr[n - 1] >= arr[n - 2])
        {
            return arr[n - 1];
        }
        int mid = (n + 0) / 2;
        if (mid == 0)
        {
            return arr[mid];
        }
        if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
        {
            return arr[mid];
        }
        if (arr[mid] >= arr[mid + 1])
        {
            ans = max(findMaximum(arr, mid), ans);
        }
        if (arr[mid + 1] >= arr[mid])
        {
            ans = max(findMaximum(arr + mid, n - mid), 0);
        }
        return ans;
    }
};