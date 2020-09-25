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
        map<int, int> m;
        int sum = 0;
        bool isT = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                cout << "Yes" << endl;
                isT = true;
                break;
            }
            if (m.find(sum + arr[i]) != m.end())
            {
                cout << "Yes" << endl;
                isT = true;
                break;
            }
            else
            {
                m[sum]++;
                sum += arr[i];
            }
        }
        if (!isT)
        {
            cout << "No" << endl;
        }
    }

    return 0;
}