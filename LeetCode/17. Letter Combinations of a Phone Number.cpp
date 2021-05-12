class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> store;
        store.push_back("");     //0
        store.push_back("");     //1
        store.push_back("abc");  //2
        store.push_back("def");  //3
        store.push_back("ghi");  //4
        store.push_back("jkl");  //5
        store.push_back("mno");  //6
        store.push_back("pqrs"); //7
        store.push_back("tuv");  //8
        store.push_back("wxyz"); //9

        vector<string> ans;
        if (digits.empty())
            return ans;
        ans.push_back("");

        for (auto x : digits)
        {
            vector<string> tmp;
            for (auto y : ans)
            {
                for (auto z : store[x - '0'])
                {
                    tmp.push_back(y + z);
                }
            }
            ans.swap(tmp);
        }
        return ans;
    }
};