// stack based approche
class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> st;
        st.push(-1);
        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (st.top() != -1 && s[i] == ')')
            {
                if (s[st.top()] == '(')
                {
                    st.pop();
                    ans = max(ans, i - st.top());
                }
                else
                {
                    st.push(i);
                }
            }
            else
            {
                st.push(i);
            }
        }

        return ans;
    }
};

// dp based approche

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int n = s.size();
        vector<int> dp(n);
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == ')')
            {
                if (s[i - 1] == '(') // for simple cases like ()
                {
                    dp[i] = 2;
                    if (i - 2 >= 0)
                        dp[i] += dp[i - 2];
                }
                else
                {
                    if ((i - dp[i - 1] - 1) >= 0 && s[i - dp[i - 1] - 1] == '(')
                    {
                        dp[i] += dp[i - 1] + 2; // in case (())
                        if (i - dp[i - 1] - 2 >= 0)
                        {
                            dp[i] += dp[i - dp[i - 1] - 2]; // in case of ()(())
                        }
                    }
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};