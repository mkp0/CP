#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    char arr[6] = {'a', 'e', 'i', 'o', 'u', 'y'};

    bool isVowel;

    for (int i = 0; i < s.size(); i++)
    {
        isVowel = false;
        for (int j = 0; j < 6; j++)
        {
            if (s[i] == arr[j])
            {
                isVowel = true;
                break;
            }
        }

        if (!isVowel)
        {
            cout << "." << s[i];
        }
    }

    return 0;
}