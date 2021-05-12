class Solution
{
public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int n)
    {
        vector<string> ans;

        if (n == 0)
            return ans;

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

        ans.push_back("");

        for (int i = 0; i < n; i++)
        {
            vector<string> tmp;
            for (auto x : ans)
            {
                for (auto y : store[a[i]])
                {
                    tmp.push_back(x + y);
                }
            }
            ans.swap(tmp);
        }
        return ans;
    }
};