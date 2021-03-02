public:
int minSwaps(vector<int> &nums)
{
    vector<pair<int, int>> temp;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        temp.push_back({nums[i], i});
    }

    sort(temp.begin(), temp.end());

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (temp[i].second == i)
            continue;
        swap(temp[i], temp[temp[i].second]);
        ans++;
        i--;
    }

    return ans;
}
}
;