// Function to find the transition point
int transitionPoint(int arr[], int n)
{
    int ans = lower_bound(arr, arr + n, 1) - arr;
    if (ans == n)
    {
        return -1;
    }
    else
    {
        return ans;
    }
}