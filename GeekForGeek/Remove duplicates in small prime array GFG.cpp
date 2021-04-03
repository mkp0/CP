class Solution
{
public:
    vector<int> removeDuplicate(vector<int> &arr, int n)
    {
        map<int, int> m;
        int pt = 0;

        for (int i = 0; i < n; i++)
        {
            if (m[arr[i]])
            {
                continue;
            }
            else
            {
                m[arr[i]] = 1;
                arr[pt] = arr[i];
                pt++;
            }
        }
        arr.erase(arr.begin() + pt, arr.end());
        return arr;
    }
};