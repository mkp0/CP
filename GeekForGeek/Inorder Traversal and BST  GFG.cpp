class Solution
{
public:
    int isRepresentingBST(int arr[], int N)
    {
        for (int i = 1; i < N; i++)
        {
            if (arr[i] <= arr[i - 1])
                return false;
        }
        return true;
    }
};