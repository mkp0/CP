class Solution
{
public:
    vector<int> changeBits(int N)
    {
        int l = 0;
        int temp = N;
        while (temp)
        {
            l++;
            temp /= 2;
        }

        int ans = pow(2, l) - 1;

        vector<int> v;
        v.push_back(ans - N);
        v.push_back(ans);

        return v;
    }
};