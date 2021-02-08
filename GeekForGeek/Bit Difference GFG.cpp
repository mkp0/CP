int countBitsFlip(int a, int b)
{

    int co = 0;

    while (a || b)
    {
        int x = a & 1;
        int y = b & 1;

        if (x ^ y)
        {
            co++;
        }
        a = a >> 1;
        b = b >> 1;
    }

    return co;
}