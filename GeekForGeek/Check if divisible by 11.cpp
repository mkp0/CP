int divisibleBy11(string S)
{
    int s1 = 0, s2 = 0;
    for (int i = 0; i < S.size(); i += 2)
    {
        int temp = S[i] - '0';
        s1 += temp;
    }
    for (int i = 1; i < S.size(); i += 2)
    {
        int temp = S[i] - '0';
        s2 += temp;
    }
    if (abs(s1 - s2) % 11 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}