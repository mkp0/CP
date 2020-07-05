// Sort elements by frequency METHOD-1
#include <bits/stdc++.h>

using namespace std;

struct dual
{
    int val, freq, index;
};

bool comp1(struct dual a, struct dual b)
{
    if (a.val < b.val)
        return true;
    else
        return false;
}

bool comp2(struct dual a, struct dual b)
{
    if (a.freq > b.freq)
        return true;
    else
        return false;
}

int main()
{
    int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};
    struct dual dualArr[8];

    for (int i = 0; i < 8; i++)
    {
        dualArr[i].val = arr[i];
        dualArr[i].index = i;
    }

    sort(dualArr, dualArr + 8, comp1);

    //USE of freq
    dualArr[0].freq = 1;
    for (int i = 1; i < 8; i++)
    {
        if (dualArr[i].val == dualArr[i - 1].val)
        {
            dualArr[i].freq = dualArr[i - 1].freq + 1;
            dualArr[i - 1].freq = -1;
        }
        else
        {
            dualArr[i].freq = 1;
        }
    }

    //Sort on the basis of Frequency
    sort(dualArr, dualArr + 8, comp2);

    //Printing in {2, 5, 2, 8, 5, 6, 8, 8} in form of {8,8,8,2,2,5,5,6}

    int j = 0;

    for (int i = 0; i < 8; i++)
    {
        if (dualArr[j].freq > 0)
        {
            cout << dualArr[j].val << " ";
            dualArr[j].freq--;
            continue;
        }
        j++;
        cout << dualArr[j].val << " ";
        dualArr[j].freq--;
    }
    cout << endl;

    return 0;
}