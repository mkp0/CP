class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &A)
    {
        int n = A.size();

        int pt = 0;

        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2 == 0 != i % 2 == 0)
            {
                while (A[pt] % 2 != 1)
                {
                    pt += 2;
                }
                swap(A[i], A[pt]);
            }
        }

        return A;
    }
};