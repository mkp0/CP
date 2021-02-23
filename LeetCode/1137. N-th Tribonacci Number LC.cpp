class Solution
{
public:
    int tribonacci(int n)
    {
        int a[3] = {0, 1, 1};
        if (n <= 2)
            return a[n];

        for (int i = 3; i <= n; i++)
        {
            int temp = a[2];
            a[2] = a[2] + a[1] + a[0];
            a[0] = a[1];
            a[1] = temp;
        }
        return a[2];
    }
};