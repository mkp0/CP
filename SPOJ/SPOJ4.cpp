#include <bits/stdc++.h>

using namespace std;

int prec(char opr)
{
    if (opr == '+' || opr == '-')
        return 1;
    else if (opr == '*' || opr == '/')
        return 2;
    else if (opr == '^')
        return 3;
    else
        return -1;
}

string ONP(const string &s)
{
    string temp;
    stack<char> stk;

    for (int i = 0; s[i]; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            temp.push_back(s[i]);
        }
        else if (s[i] == '(')
        {
            stk.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!stk.empty() && stk.top() != '(')
            {
                temp.push_back(stk.top());
                stk.pop();
            }
            if (!stk.empty())
                stk.pop(); //pop the closing parenthesis
            else
            {
                //since the closing parenthesis was not found
                cout << "Invalid infix expression: " << endl;
                exit(1);
            }
        }
        else
        {
            while (!s.empty() && prec(stk.top()) >= prec(s[i]))
            {
                temp.push_back(stk.top());
                stk.pop();
            }
            stk.push(s[i]);
        }
    }

    return temp;
}
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        string s;
        cin >> s;
        cout << ONP(s) << endl;
    }
    return 0;
}