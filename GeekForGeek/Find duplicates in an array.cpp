vector<int> duplicates(int a[], int n)
{
    vector<int> v(n, 0);
    bool temp = false;
    for (int i = 0; i < n; i++)
    {
        v[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
        if (v[i] > 1)
        {
            a[i] = v[i];
        }
    }
    v.clear();
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            v.push_back(i);
        }
    }

    if (v.empty())
    {
        v.push_back(-1);
        return v;
    }

    return v;
}