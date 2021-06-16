class Solution
{
public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int ar[], int de[], int n)
    {
        sort(ar, ar + n);
        sort(de, de + n);

        int ans = 1;
        int curr = 0;
        for (int i = 1; i < n; i++)
        {
            if (ar[i] > de[curr])
            {
                curr++;
            }
            else
            {
                ans = max(ans, i - curr + 1);
            }
        }

        return ans;
    }
    // 900 0940 0950 1100 1500 1800
    // 910 1120 1130 1200 1900 2000
};