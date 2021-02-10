class Solution
{
public:
    int closing(string s, int pos)
    {
        stack<char> st;

        st.push(s[pos]);
        int n = s.size();

        for (int i = pos + 1; i < n; i++)
        {
            if (s[i] == '[')
            {
                st.push(s[pos]);
            }
            if (s[i] == ']')
            {
                st.pop();
                if (st.empty())
                {
                    return i;
                }
            }
        }

        return -1;
    }
};