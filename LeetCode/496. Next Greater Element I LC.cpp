class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &num1, vector<int> &num2)
    {
        vector<int> ans;
        int n1 = num1.size();
        int n2 = num2.size();
        map<int, int> m;
        stack<int> s;

        for (int i = n2 - 1; i >= 0; i--)
        {
            m[num2[i]] = i;
            int val = -1;
            if (s.empty())
            {
                ans.push_back(val);
                s.push(num2[i]);
                continue;
            }

            if (s.top() <= num2[i])
            {
                s.pop();
                i++;
                continue;
            }
            val = s.top();
            s.push(num2[i]);
            ans.push_back(val);
        }

        reverse(ans.begin(), ans.end());

        vector<int> realAns;

        for (auto x : num1)
        {
            realAns.push_back(ans[m[x]]);
        }

        return realAns;
    }
};