//Longest increasing subsequence
#include <bits/stdc++.h>

using namespace std;

int memo[100];

void func(int arr[], int l)
{
    if (l == 0)
    {
        return;
    }

    for (int i = 1; i < l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                memo[i] = max(memo[j] + 1, memo[i]);
            }
        }
    }
}

int main()
{
    int l;
    cin >> l;
    int arr[l];

    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
        memo[i] = 1;
    }
    func(arr, l);

    int ans = INT_MIN;

    for (int i = 0; i < l; i++)
    {
        cout << memo[i] << " ";
    }

    // cout << ans;
    return 0;
}