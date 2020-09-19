#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int arr[] = {2, 3, 5, 7};
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        vector<int> t;
        long long ans = 0;
        while ((num - 1) / 4)
        {
            ans = arr[(num - 1) % 4];
            t.push_back(ans);
            num = (num - 1) / 4;
        }

        ans = arr[(num - 1) % 4];
        t.push_back(ans);
        reverse(t.begin(), t.end());
        for (auto i : t)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}