//Move all negative elements to end in order with extra space allowed
//Time = O(n) &&  Space = O(n)

#include <bits/stdc++.h>

using namespace std;

void func(int arr[], int len)
{
    vector<int> temp;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= 0)
        {
            temp.push_back(arr[i]);
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < 0)
        {
            temp.push_back(arr[i]);
        }
    }

    for (int i = 0; i < len; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {-5, 7, -3, -4, 9, 10, -1, 11};
    func(arr, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}