char *reverse(char *S, int len)
{
    stack<char> s;

    int co = 0;
    while (S[co] != '\0')
    {
        s.push(S[co]);
        co++;
    }

    co = 0;

    while (S[co] != '\0')
    {
        S[co] = s.top();
        s.pop();
        co++;
    }

    return S;
}