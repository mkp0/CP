vector<int> kmp(const string &T, const string &P)
{
    vector<int> idx;
    if (P.empty())
        return idx;

    vector<int> pi(P.size(), 0);
    for (int i = 1, k = 0; i < P.size(); ++i)
    {
        while (k && P[k] != P[i])
            k = pi[k - 1];
        if (P[k] == P[i])
            ++k;
        pi[i] = k;
    }

    for (int i = 0, k = 0; i < T.size(); ++i)
    {
        while (k && P[k] != T[i])
            k = pi[k - 1];
        if (P[k] == T[i])
            ++k;
        if (k == P.size())
        {
            idx.push_back(i - k + 1);
        }
    }

    return idx;
}