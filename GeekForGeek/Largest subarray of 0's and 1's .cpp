#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        //soln
        int sum = 0, ans = 0;
        map<int, int> m;
        m[0] = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                arr[i] = -1;
            }
            sum += arr[i];
            if (m.find(sum) != m.end())
            {
                ans = max(ans, i - m[sum]);
            }
            else
            {
                m[sum] = i;
            }
        }
        return ans;
    }
    return 0;
}