#include <bits/stdc++.h>

#define ll long long
#define pi (3.141592653589)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define S second
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;

bool areBracketsBalanced(string expr)
{
    stack<char> s;
    char x;

    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }

        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;

        switch (expr[i])
        {
        case ')':

            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            // Store the top element in b
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

            // Store the top element in c
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    // Check Empty Stack
    return (s.empty());
}

void solve()
{
    string s;
    int n;
    cin >> s;
    n = s.size();

    if (s[0] == s[n - 1])
    {
        cout << "NO\n";
        return;
    }

    char arr[3] = {'x', 'x', 'x'};
    arr[s[0] - 'A'] = '(';
    arr[s[n - 1] - 'A'] = ')';

    int idx = -1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 'x')
        {
            idx = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            s[i] = arr[0];
        }
        else if (s[i] == 'B')
        {
            s[i] = arr[1];
        }
        else
        {
            s[i] = arr[2];
        }
    }

    string temp = s;

    for (int i = 0; i < n; i++)
    {
        if (temp[i] == 'x')
        {
            temp[i] = '(';
        }
    }

    if (areBracketsBalanced(temp))
    {
        cout << "YES\n";
        return;
    }

    temp = s;

    for (int i = 0; i < n; i++)
    {
        if (temp[i] == 'x')
        {
            temp[i] = ')';
        }
    }

    if (areBracketsBalanced(temp))
    {
        cout << "YES\n";
        return;
    }

    cout << "NO"
         << "\n";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}