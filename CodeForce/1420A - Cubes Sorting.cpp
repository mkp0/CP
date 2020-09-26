#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll ans;
ll merge(ll arr[], ll temp[], ll left, ll mid, ll right)
{
    ll inv_count = 0;

    ll i = left; /* i is index for left subarray*/
    ll j = mid;  /* i is index for right subarray*/
    ll k = left; /* i is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];

            /* this is tricky -- see above explanation/ 
              diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }

    /* Copy the remaining elements of left subarray 
     (if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    /* Copy the remaining elements of right subarray 
     (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];

    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

/* An auxiliary recursive function that sorts the input 
   array and returns the number of inversions in the 
   array. */
ll _mergeSort(ll arr[], ll temp[], ll left, ll right)
{
    ll mid, inv_count = 0;
    if (right > left)
    {
        /* Divide the array llo two parts and call 
          _mergeSortAndCountInv() for each of the parts */
        mid = (right + left) / 2;

        /* Inversion count will be sum of inversions in 
           left-part, right-part and number of inversions 
           in merging */
        inv_count = _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid + 1, right);
    }

    return inv_count;
}

/* This function sorts the input array and returns the 
   number of inversions in the array */
ll countSwaps(ll arr[], ll n)
{
    ll temp[n];
    return _mergeSort(arr, temp, 0, n - 1);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ans = 0;
        ll temp = n * (n - 1) / 2;
        temp--;
        ans = countSwaps(arr, n);
        if (ans <= temp)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}