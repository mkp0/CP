//Save all the indexes of a certain value of a given array
#include <bits/stdc++.h>

using namespace std;

void func(int *arr, int len, int val, vector<int> &ans)
{
    if (len < 0)
    {
        return;
    }
    if (arr[len] == val)
    {
        ans.push_back(len);
    }
    func(arr, len - 1, val, ans);
}

int main()
{
    int arr[] = {1, 2, 5, 4, 4, 6, 3, 4, 2, 5};
    vector<int> ans;

    func(arr, 8, 4, ans);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}