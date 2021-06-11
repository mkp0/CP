class Solution
{
public:
    vector<int> getLeft(vector<int> &heights)
    {
        vector<int> ans(heights.size(), -1);
        stack<int> st;

        for (int i = heights.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && heights[st.top()] > heights[i])
            {
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        return ans;
    }

    vector<int> getRight(vector<int> &heights)
    {
        vector<int> ans(heights.size(), heights.size());
        stack<int> st;

        for (int i = 0; i < heights.size(); i++)
        {
            while (!st.empty() && heights[st.top()] > heights[i])
            {
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int> &heights)
    {
        vector<int> leftMax = getLeft(heights);
        vector<int> rightMax = getRight(heights);

        // simple intution if we get next smaller and prev smaller then all the value between excluding them must be atleast height current element

        int ans = 0;

        for (int i = 0; i < heights.size(); i++)
        {
            ans = max(ans, heights[i] * (rightMax[i] - leftMax[i] - 1));
        }

        return ans;
    }
};