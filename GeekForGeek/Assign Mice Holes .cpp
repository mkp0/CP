class Solution
{
public:
    int assignMiceHoles(int N, int M[], int H[])
    {
        if (N == 1)
        {
            return abs(M[0] - H[0]);
        }
        sort(M, M + N);
        sort(H, H + N);
        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            ans = max(ans, abs(M[i] - H[i]));
        }
        return ans;
    }
};