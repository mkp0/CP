class Solution
{
public:
    vector<int> changeBits(int N)
    {
        int temp = N;
        int maxi = 0;

        while (temp)
        {
            maxi = maxi << 1;
            maxi = maxi | 1;
            temp /= 2;
        }
        vector<int> v;
        v.push_back(maxi - N);
        v.push_back(maxi);

        return v;
    }
};