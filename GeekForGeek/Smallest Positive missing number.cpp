class Solution
{
public:
    int missingNumber(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] != i + 1) && (arr[i] <= n) && (arr[i] > 0))
            {
                int x = arr[i];
                swap(arr[i], arr[arr[i] - 1]);
                if (x != arr[i])
                    i--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != i + 1)
            {
                return i + 1;
            }
        }
        return n + 1;
    }
};