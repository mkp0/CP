// Maximum and minimum of an array using minimum number of comparisons

//USING TOURNAMENT METHOD
// Array koo divide krnge recursivlu divide jb tk ek ya doo element na bachhe return dual with min and max conting
#include <bits/stdc++.h>

using namespace std;

struct dual
{
    int min;
    int max;
};

struct dual minmax(int arr[], int start, int end)
{
    struct dual sol, temp1, temp2;

    //IF there is Only one element if present
    if (start == end)
    {
        sol.min = arr[start];
        sol.max = arr[start];
        return sol;
    }

    //IF there is Only Two element if present
    if (end == start + 1)
    {
        if (arr[start] > arr[end])
        {
            sol.min = arr[end];
            sol.max = arr[start];
        }
        else
        {
            sol.max = arr[end];
            sol.min = arr[start];
        }

        return sol;
    }

    //Recursion when there is more than two element is present
    int mid = (start + end) / 2;
    temp1 = minmax(arr, start, mid);
    temp2 = minmax(arr, mid + 1, end);

    if (temp1.min > temp2.min)
    {
        sol.min = temp2.min;
    }
    else
    {
        sol.min = temp1.min;
    }

    if (temp1.max < temp2.max)
    {
        sol.max = temp2.max;
    }
    else
    {
        sol.max = temp1.max;
    }

    return sol;
}

int main()
{
    int arr[] = {1000, 11, 445, 1, 5500, 330, 3000, -1};

    struct dual ans = minmax(arr, 0, 7);

    cout << "Min Element : " << ans.min << "\nMax Element : " << ans.max << endl;

    return 0;
}