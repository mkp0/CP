vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> ans;

    stack<long long> temp;

    for (int i = n - 1; i >= 0; i--)
    {
        if (temp.empty())
        {
            ans.push_back(-1);
            temp.push(arr[i]);
            continue;
        }
        if (temp.top() <= arr[i])
        {
            temp.pop();
            i++;
        }
        else
        {
            ans.push_back(temp.top());
            temp.push(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}