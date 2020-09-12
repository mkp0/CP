#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> ans;
        for (int d = 1; d <= (y - x); d++)
        {
            if ((y - x) % d != 0)
            {
                continue;
            }
            vector<int> res;
            bool isX = false;
            int totalE = n;
            int start = y;
            while (totalE > 0 && start > 0)
            {
                res.push_back(start);
                if (start == x)
                    isX = true;
                start -= d;
                totalE--;
            }

            if (isX && totalE > 0)
            {
                start = y;
                while (totalE > 0)
                {
                    start += d;
                    res.push_back(start);
                    totalE--;
                }
            }

            if (totalE == 0 && isX)
                if (ans.empty() || ans.back() > res.back())
                {
                    ans = res;
                }
        }

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}