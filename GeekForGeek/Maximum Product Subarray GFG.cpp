class Solution
{
public:
    // Function to find maximum product subarray
    long long maxProduct(int *arr, int n)
    {

        long long mineh = 1;
        long long maxeh = 1;
        long long maxtill = 0;

        for (long long i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                maxeh = maxeh * arr[i];
                mineh = min(mineh * arr[i], 1LL);
            }
            else if (arr[i] < 0)
            {
                long long temp = maxeh;
                maxeh = max(mineh * arr[i], 1LL);
                mineh = temp * arr[i];
            }
            else
            {
                maxeh = 1;
                mineh = 1;
            }
            maxtill = max(maxtill, maxeh);
        }
        return maxtill;
    }
};