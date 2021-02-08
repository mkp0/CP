bool ispar(string x)
{
    int n = x.size();

    if (n % 2 != 0)
    {
        return false;
    }

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == ')' && !s.empty() && s.top() == '(')
        {
            s.pop();
        }
        else if (x[i] == ']' && !s.empty() && s.top() == '[')
        {
            s.pop();
        }
        else if (x[i] == '}' && !s.empty() && s.top() == '{')
        {
            s.pop();
        }
        else
        {
            s.push(x[i]);
        }
    }
    if (s.size() == 0)
    {
        return true;
    }
    return false;
}