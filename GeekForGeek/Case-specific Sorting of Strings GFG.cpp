string caseSort(string s, int n)
{

    string l = "", u = "";

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            l.push_back(s[i]);
        }
        else
        {
            u.push_back(s[i]);
        }
    }

    sort(l.begin(), l.end());
    sort(u.begin(), u.end());

    int i = 0, j = 0;

    for (int k = 0; k < n; k++)
    {
        if (s[k] >= 'a' && s[k] <= 'z')
        {
            ans.push_back(l[i]);
            i++;
        }
        else
        {
            ans.push_back(u[j]);
            j++;
        }
    }

    return ans;
}