class Solution
{
public:
    string reverseEqn(string s)
    {
        stack<string> st;
        string ans;

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            string temp;
            while (isdigit(s[i]) && i < n)
            {
                temp.push_back(s[i]);
                i++;
            }
            st.push(temp);
            if (i == n)
                break;
            temp = "";
            temp.push_back(s[i]);
            st.push(temp);
        }

        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};