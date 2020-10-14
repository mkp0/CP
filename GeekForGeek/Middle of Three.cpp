class Solution
{
public:
    int middle(int A, int B, int C)
    {
        if (A > B && B > C || B > A && B < C)
        {
            return B;
        }
        else if (C > A && A > B || A > C && A < B)
        {
            return A;
        }
        else
        {
            return C;
        }
        return 0;
    }
};