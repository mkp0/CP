class Solution
{
public:
    vector<int> diStringMatch(string S)
    {
        int cod = 0;

        for (auto x : S)
        {
            if (x == 'D')
                cod++;
        }

        int coi = cod + 1;

        vector<int> ans;
        ans.push_back(cod);

        cod--;

        for (auto x : S)
        {
            if (x == 'I')
            {
                ans.push_back(coi);
                coi++;
            }
            else
            {
                ans.push_back(cod);
                cod--;
            }
        }

        return ans;
    }
};