class Solution
{
public:
    string chooseandswap(string a)
    {
        vector<int> arr(26);
        int i = 0, j = 0;
        int n = a.size();
        bool is = false;

        for (int k = 0; k < n; k++)
        {
            if (!arr[a[k] - 'a'])
                arr[a[k] - 'a'] = k + 1;
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < a[i] - 'a'; j++)
            {
                if (arr[j] && (arr[a[i] - 'a'] <= arr[j]))
                {
                    i = a[i] - 'a';
                    is = true;
                    break;
                }
            }
            if (is)
                break;
        }

        if (!is)
            return a;

        for (int k = 0; k < n; k++)
        {
            if (a[k] == ('a' + i))
            {
                a[k] = 'a' + j;
            }
            else if (a[k] == 'a' + j)
            {
                a[k] = 'a' + i;
            }
        }

        return a;
    }
};