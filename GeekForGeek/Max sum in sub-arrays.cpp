
#define ll long long

class Solution
{
public:
    long long pairWithMaxSum(long long arr[], long long n)
    {
        stack<ll> temp;

        temp.push(arr[0]);
        temp.push(arr[1]);

        ll ans = arr[0] + arr[1];

        for (int i = 2; i < n; i++)
        {
            ll fir = temp.top();
            temp.pop();
            temp.pop();
            temp.push(fir);

            temp.push(arr[i]);

            ans = max(ans, arr[i] + fir);
        }

        return ans;
    }
};