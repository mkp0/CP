// User function Template for C++

class Solution
{
public:
    string strmul(string s, int co)
    {
        string temp = "";

        for (int i = 0; i < co; i++)
        {
            temp += s;
        }

        return temp;
    }

    string decodedString(string s)
    {
        stack<int> st;
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '[')
                st.push(i);
            else if (s[i] == ']')
            {
                int x = st.top();
                string part;
                if ((i - x - 1) > 0)
                    part = s.substr(x + 1, i - x - 1);

                int co = 0;
                int y; // digit helper

                for (y = x - 1; y >= 0; y--)
                {
                    if (!isdigit(s[y]))
                    {
                        break;
                    }
                }
                y++;
                x = y; // replaceble string

                for (; y < n; y++)
                {
                    if (isdigit(s[y]))
                    {
                        co *= 10;
                        co += (s[y] - '0');
                    }
                    else
                    {
                        break;
                    }
                }

                part = strmul(part, co);

                s.replace(x, i - x + 1, part);
                n = s.size();

                i = x + part.size() - 1;

                st.pop();
            }
        }

        return s;
    }
};