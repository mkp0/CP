class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        auto x = upper_bound(letters.begin(), letters.end(), target);
        if (x != letters.end())
        {
            return letters[x - letters.begin()];
        }
        return letters[0];
    }
};