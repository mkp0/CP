queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> s;

    int len = q.size();

    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    while (len - k)
    {
        s.push(q.front());
        q.pop();
        k++;
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    return q;
}