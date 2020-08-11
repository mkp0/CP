#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K, L, T;
    cin >> N >> K;
    int ans = 0;
    vector<int> imp;
    for (int i = 0; i < N; i++)
    {
        cin >> L;
        cin >> T;
        if (T == 0)
        {
            ans += L;
        }
        else
        {
            imp.push_back(L);
        }
    }

    sort(imp.rbegin(), imp.rend());
    while (K > 0 && imp.size() > 0)
    {

        ans += imp[0];
        imp.erase(imp.begin());
        K--;
    }
    for (int i = 0; i < imp.size(); i++)
    {

        ans -= imp[i];
    }
    cout << ans;
    return 0;
}