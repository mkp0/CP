class Solution
{
public:
    //Function to reverse words in a given string.
    string reverseWords(string s)
    {
        int n = s.size();
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            while (s[y] != '.' && y < n)
            {
                y++;
            }
            reverse(s.begin() + x, s.begin() + y);
            y++;
            x = y;
        }
        reverse(s.begin(), s.end());

        return s;
    }
};