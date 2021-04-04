#include <bits/stdc++.h>

using namespace std;

vector<int> g[10001];

void tsutil(int i, set<int> &vis, stack<int> &s)
{
    vis.insert(i);

    for (auto x : g[i])
    {
        if (vis.find(x) == vis.end())
        {
            tsutil(x, vis, s);
        }
    }

    s.push(i);
}
void ts()
{
    set<int> vis;
    stack<int> s;

    for (int i = 0; i < 6; i++)
    {
        if (vis.find(i) == vis.end())
            tsutil(i, vis, s);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    g[5].push_back(2);
    g[5].push_back(0);
    g[4].push_back(0);
    g[4].push_back(1);
    g[2].push_back(3);
    g[3].push_back(1);

    ts();
    return 0;
}