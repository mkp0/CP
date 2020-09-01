#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {-5, 6, 7, -20, 3, 5, 8, -9};

    vector<int> x;
    x.push_back(arr[0]);

    for (int i = 1; i < 8; i++)
    {
        int temp = max(arr[i], arr[i] + x[i - 1]);
        x.push_back(temp);
    }

    cout << *max_element(x.begin(), x.end());

    return 0;
}