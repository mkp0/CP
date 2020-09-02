#include <bits/stdc++.h>

using namespace std;

class Job
{
public:
    int deadline;
    int profit;
};

bool comp(Job a, Job b)
{
    if (a.deadline < b.deadline)
    {
        return true;
    }
    if (a.deadline == b.deadline)
    {
        if (a.profit > b.profit)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

int func(Job arr[], int l)
{
    sort(arr, arr + l, comp);

    int st = 0, res = 0;
    for (int i = 0; i < l; i++)
    {
        if (arr[i].deadline > st)
        {
            res += arr[i].profit;
            st++;
        }
    }

    return res;
}

int main()
{
    int l;
    cin >> l;

    Job arr[l];

    for (int i = 0; i < l; i++)
    {
        cin >> arr[i].deadline;
        cin >> arr[i].profit;
    }

    cout << func(arr, l);

    return 0;
}