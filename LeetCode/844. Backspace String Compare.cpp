class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int n = s.size();
        int m = t.size();

        int pt1 = 0, pt2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                swap(s[pt1], s[i]);
                pt1++;
            }
            else
            {
                if (pt1)
                    pt1--;
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (t[i] >= 'a' && t[i] <= 'z')
            {
                swap(t[pt2], t[i]);
                pt2++;
            }
            else
            {
                if (pt2)
                    pt2--;
            }
        }

        int i = 0;
        int j = 0;

        while (isalnum(s[i]) && isalnum(t[j]))
        {
            if (i < pt1 && j < pt2)
            {
                if (s[i] != t[j])
                    return false;
                i++, j++;
            }
            else
            {
                break;
            }
        }
        while (i < pt1 && isalnum(s[i]))
        {
            return false;
        }
        while (j < pt2 && isalnum(t[j]))
        {
            return false;
        }

        return true;
    }
};