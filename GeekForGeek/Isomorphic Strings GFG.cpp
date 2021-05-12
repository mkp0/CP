class Solution
{
public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        int a[256] = {0};
        int b[256] = {0};

        int n = str1.size();
        int m = str2.size();

        if (n != m)
            return false;

        for (int i = 0; i < n; i++)
        {
            if ((a[str1[i]] == 0) && (b[str2[i]] == 0))
            {
                a[str1[i]] = str2[i];
                b[str2[i]] = str1[i];
            }
            else
            {
                if ((str2[i] != a[str1[i]]) || (str1[i] != b[str2[i]]))
                    return false;
            }
        }

        return true;
    }
};