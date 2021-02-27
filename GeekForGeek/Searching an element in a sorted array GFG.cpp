class Solution
{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int n, int k)
    {

        int s = 0;
        int e = n - 1;

        while (s < e)
        {
            int m = (s + e) / 2;
            if (arr[m] == k)
                return true;
            if (arr[m] > k)
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
        }

        if (arr[s] == k)
            return 1;

        return -1;
    }
};