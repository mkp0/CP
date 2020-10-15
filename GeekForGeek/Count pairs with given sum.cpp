class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        map<int, int> m;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int temp = k - arr[i];

            if (m.find(temp) != m.end())
            {
                ans += m[temp];
            }
            m[arr[i]]++;
        }
        return ans;
    }
};