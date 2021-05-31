class Solution
{
public:
    /*You are required to complete this method */
    int findMaxDiff(int a[], int n)
    {
        vector<int> left, right;
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                left.push_back(0);
                st.push(a[i]);
            }
            else
            {
                if (st.top() < a[i])
                {
                    left.push_back(st.top());
                    st.push(a[i]);
                }
                else
                {
                    st.pop();
                    i--;
                }
            }
        }

        while (!st.empty())
        {
            if (!st.empty())
                st.pop();
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (st.empty())
            {
                right.push_back(0);
                st.push(a[i]);
            }
            else
            {
                if (st.top() < a[i])
                {
                    right.push_back(st.top());
                    st.push(a[i]);
                }
                else
                {
                    st.pop();
                    i++;
                }
            }
        }

        reverse(right.begin(), right.end());

        int ans = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            ans = max(ans, abs(left[i] - right[i]));
        }

        return ans;
    }
};