class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (auto &x : s)
        {
            if (x == '(' || x == '{' || x == '[')
            {
                st.push(x);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                else if (((x == ')') && (st.top() == '(')) || ((st.top() == '[') && (x == ']')) || ((x == '}') && (st.top() == '{')))
                {
                    st.pop();
                }
                else
                {

                    cout << st.top() << " ";
                    return false;
                }
            }
        }

        return st.empty();
    }
};