#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int x;
        cin >> n >> x;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = n;

        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = i; j < n; j++)
            {
                temp += arr[j];
                if (temp > x)
                {
                    ans = min(ans, j - i + 1);
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}