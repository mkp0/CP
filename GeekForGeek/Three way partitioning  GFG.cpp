class Solution
{
public:
    void threeWayPartition(vector<int> &arr, int a, int b)
    {
        int n = arr.size();
        int st = 0;
        int ed = n - 1;
        for (int i = 0; i <= ed; i++)
        {
            if (arr[i] < a)
            {
                swap(arr[st++], arr[i]);
            }
            else if (arr[i] > b)
            {
                swap(arr[ed--], arr[i]);
                i--;
            }
        }
    }
};