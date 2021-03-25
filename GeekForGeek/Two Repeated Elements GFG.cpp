class Solution
{
public:
    // Function to find the two repeated element
    // arr: input array
    // N: denoting that the size of array is N + 2 and range of elements is [1, N]
    pair<int, int> twoRepeated(int arr[], int n)
    {
        int combi = 0;

        for (int i = 0; i < n + 2; i++)
        {
            combi = combi ^ arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            combi = combi ^ i;
        }

        int rs = combi & ~(combi - 1);
        int a = 0, b = 0;
        for (int i = 0; i < n + 2; i++)
        {
            if (arr[i] & rs)
            {
                a = a ^ arr[i];
            }
            else
            {
                b = b ^ arr[i];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (i & rs)
            {
                a = a ^ i;
            }
            else
            {
                b = b ^ i;
            }
        }

        pair<int, int> ans = {a, b};

        for (int i = 0; i < n + 2; i++)
        {
            if (arr[i] == ans.first && !a)
            {
                break;
            }
            if (arr[i] == ans.second && !b)
            {
                swap(ans.first, ans.second);
                break;
            }
            if (a == arr[i])
            {
                a = 0;
            }
            if (b == arr[i])
            {
                b = 0;
            }
        }
        return ans;
    }