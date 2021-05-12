class Solution
{
public:
    //Complete this function
    //Function to sort the array according to frequency of elements.

    static bool comp(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.first > b.first)
            return true;
        else if (a.first == b.first)
            return a.second < b.second;
        return false;
    }

    vector<int> sortByFreq(int arr[], int n)
    {
        vector<int> ans;

        if (n == 0)
            return ans;

        sort(arr, arr + n);
        vector<pair<int, int>> pairs;
        pairs.push_back({arr[0], 1});
        int pt = 0;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                pairs[pt].second += 1;
            }
            else
            {
                pt++;
                pairs.push_back({arr[i], 1});
            }
        }

        for (auto &x : pairs)
        {
            x.first = x.first ^ x.second;
            x.second = x.first ^ x.second;
            x.first = x.first ^ x.second;
        }

        sort(pairs.begin(), pairs.end(), comp);

        for (auto x : pairs)
        {
            while (x.first)
            {
                ans.push_back(x.second);
                x.first--;
            }
        }
        return ans;
    }
};