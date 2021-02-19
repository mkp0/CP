class Solution
{
public:
    int longestOnes(vector<int> &A, int K)
    {
        int i = 0, j = 0;
        // we are expanding our window or making it constant in every loop ie diff i to j
        int n = A.size();
        for (i = 0; i < n; i++)
        {
            if (A[i] == 0)
            {
                K--;
            }
            if (K < 0 && A[j++] == 0)
            {
                K++;
            }
        }
        return i - j;
    }
};