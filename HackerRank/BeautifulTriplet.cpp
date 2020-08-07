//HackerRank Beautiful Triplet
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;

    for (int i = 0; i < a; i++)
    {
        int j = i + 1, tempi = arr[i], mul3count = 1;
        while (j < a)
        {
            if ((arr[j] - tempi) == b)
            {
                mul3count++;
                tempi = arr[j];
                if (mul3count == 3)
                {
                    ans++;
                    break;
                }
            }
            j++;
        }
    }

    cout << ans;

    return 0;
}