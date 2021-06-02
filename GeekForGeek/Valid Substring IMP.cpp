// User function template for c++
class Solution
{
public:
    int findMaxLen(string s)
    {
        stack<int> st;
        st.push(-1); // we imagine s is not valid at index -1 which not exist

        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else if (s[i] == ')')
            {
                st.pop();
                if (st.empty())
                {
                    st.push(i);
                }
                else
                {
                    ans = max(ans, i - st.top());
                }
            }
        }
        return ans;
    }
};