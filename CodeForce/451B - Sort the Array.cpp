#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = INT_MIN, end = INT_MIN, temp = INT_MIN, m = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < temp)
        {
            cout << "no";
            return 0;
        }
        if (arr[i] < arr[i - 1])
        {
            if (start != INT_MIN)
            {
                cout << "no";
                return 0;
            }

            start = i;
            temp = arr[start - 1];
            while (i < n && arr[i] < arr[i - 1])
            {
                i++;
            }
            end = i;
            i--;
            if (arr[i] < m)
            {
                cout << "no";
                return 0;
            }
            m = max(m, arr[start - 1]);
        }
        else
        {
            m = max(m, arr[i - 1]);
        }
    }

    if (start == INT_MIN)
    {
        start = 1;
        end = 1;
    }

    cout << "yes" << endl;

    cout << start << " " << end;
    return 0;
}

// 2 5 4 3 1