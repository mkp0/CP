class Solution
{
public:
    string countAndSay(int n)
    {
        string s = "1";

        for (int i = 1; i < n; i++)
        {
            string temp;
            for (int j = 0; j < s.size(); j++)
            {
                char c = s[j];
                int co = 0;
                while (s[j] == c && j < s.size())
                {
                    co++;
                    j++;
                }
                j--;
                temp.push_back('0' + co);
                temp.push_back(c);
            }
            s = temp;
        }
        return s;
    }
};