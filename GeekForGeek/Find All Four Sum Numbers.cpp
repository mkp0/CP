class Solution
{
public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &arr, int k)
    {
        int n = arr.size();

        sort(arr.begin(), arr.end());
        map<vector<int>, int> m;
        vector<vector<int>> ans;
        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                int st = j + 1, ed = n - 1;
                while (ed > st)
                {
                    int su = arr[i] + arr[j] + arr[st] + arr[ed];
                    if (su == k)
                    {
                        m[{arr[i], arr[j], arr[st], arr[ed]}]++;
                        st++, ed--;
                    }
                    else if (su > k)
                    {
                        ed--;
                    }
                    else
                    {
                        st++;
                    }
                }
            }
        }

        for (auto &x : m)
        {
            ans.push_back(x.first);
        }
        return ans;
    }
};