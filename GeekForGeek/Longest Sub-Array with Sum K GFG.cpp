class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        int ans = 0;
        int prefSum[N + 1];
        prefSum[0] = 0;
        map<int, int> m;
        m[prefSum[0]] = 0;
        for (int i = 1; i <= N; i++)
        {
            prefSum[i] = prefSum[i - 1] + A[i - 1];
            if (m.find(prefSum[i] - K) != m.end())
            {
                ans = max(ans, i - m[prefSum[i] - K]);
            }
            if (m.find(prefSum[i]) == m.end())
            {
                m[prefSum[i]] = i;
            }
        }

        return ans;
    }
};