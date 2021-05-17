class Solution
{
public:
    string decodeString(string s)
    {

        string ans;
        int i = 0;

        while (i < s.size())
        {
            // we need to find first pair of opening and closing bracked
            // that need to decode first to solve outer pair of bracket
            if (s[i] != ']')
            {
                i++;
                continue;
            }

            int x = i;
            while (s[x] != '[')
            {
                x--;
            }

            string temp = s.substr(x + 1, i - (x + 1)); // s[x] == '[' and s[i] == ']'

            int y = x;
            while ((y - 1 >= 0) && isdigit(s[y - 1]))
            {
                y--;
            }

            int frq = stoi(s.substr(y, y - x));

            string decodedStrign = "";

            int freq = frq;
            while (freq)
            {
                decodedStrign += temp;
                freq--;
            }

            s.replace(y, i - y + 1, decodedStrign);

            i = y + (i - (x + 1)) * frq;
        }

        return s;
    }
};