#include <bits/stdc++.h>
using namespace std;

vector<int> funGame(vector<int> arr)
{
    stack<int> s1, s2;
    vector<int> v;
    int si = arr.size();
    for (int i = 0; i < si; i++)
    {
        s1.push(arr[i]);
        s2.push(arr[si - i - 1]);
    }
    while (!s1.empty() && !s2.empty())
    {
        if (s1.top() > s2.top())
        {
            s2.pop();
            v.push_back(1);
        }
        else if (s1.top() < s2.top())
        {
            s1.pop();
            v.push_back(2);
        }
        else
        {
            s1.pop();
            s2.pop();
            v.push_back(0);
        }
    }
    return v;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i_arr = 0; i_arr < n; i_arr++)
    {
        cin >> arr[i_arr];
    }

    vector<int> out_;
    out_ = funGame(arr);
    cout << out_[0];
    for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)
    {
        cout << " " << out_[i_out_];
    }
}