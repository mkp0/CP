int *mergeKArrays(int arr[][N], int k)
{
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    for (int i = 0; i < k; i++)
    {
        pq.push({arr[i][0], {i, 0}});
    }

    int *ans = new int[k * k];
    int i = 0;

    while (!pq.empty())
    {
        auto val = pq.top();
        pq.pop();
        ans[i] = val.first;
        int x = val.second.first;
        int y = val.second.second;
        i++;

        if (y + 1 < k)
        {
            pq.push({arr[x][y + 1], {x, y + 1}});
        }
    }

    return ans;
}