#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, l;
    cin >> a >> b >> l;

    long long ans = ceil(a * 1.0 / l) * ceil(b * 1.0 / l);
    cout << ans;
    return 0;
}