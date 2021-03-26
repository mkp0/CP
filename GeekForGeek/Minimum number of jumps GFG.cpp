int minJumps(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;

    if (arr[0] == 0)
        return -1;

    int maxS = arr[0];
    int step = arr[0];
    int jump = 1;

    if (step == 0)
    {
        return -1;
    }

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            return jump;
        }

        maxS = max(maxS, i + arr[i]);
        step--;

        if (step == 0)
        {
            jump++;
            if (i >= maxS)
            {
                return -1;
            }
            step = maxS - i;
        }
    }

    return -1;
}