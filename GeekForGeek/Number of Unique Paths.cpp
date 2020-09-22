#include <bits/stdc++.h>

using namespace std;

int ans = 0, M, N;

void func(int m, int n)
{
    if (m > M || n > N)
    {
        return;
    }
    if (m == M && n == N)
    {
        ans++;
        return;
    }
    func(m + 1, n);
    func(m, n + 1);
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> M >> N;
        func(1, 1);
        cout << ans << endl;
    }
    return 0;
}