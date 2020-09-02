#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int weight;
    int value;
};

bool comp(Node a, Node b)
{
    int ar, br;
    ar = a.value / a.weight;
    br = b.value / b.weight;

    if (ar > br)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int ans(Node arr[], int l, int gw)
{
    if (l == 0)
    {
        return 0;
    }

    sort(arr, arr + l, comp);

    int res = 0;

    for (int i = 0; i < l; i++)
    {
        if (arr[i].weight >= gw)
        {
            res += ((arr[i].value / arr[i].weight) * gw);
            break;
        }
        else
        {
            res += arr[i].value;
            gw -= arr[i].weight;
        }

        cout << res << " ";
    }

    return res;
}

int main()
{
    int l;
    cin >> l;

    Node arr[l];

    for (int i = 0; i < l; i++)
    {
        cin >> arr[i].weight;
        cin >> arr[i].value;
    }

    int gw;
    cin >> gw;

    cout << ans(arr, l, gw);

    return 0;
}