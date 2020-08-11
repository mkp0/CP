#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &e : arr)
        cin >> e;

    sort(arr.begin(), arr.end());

    int diff = 9999999;
    for (int i = 1; i < arr.size(); ++i)
    {
        diff = min(diff, abs(arr[i] - arr[i - 1]));
    }

    cout << diff << '\n';

    return 0;
}
