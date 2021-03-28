#define sz 27

struct Vertex
{
    long totalWord;
    long totalPrefix;
    bool vis;
    Vertex *edges[sz];
};

Vertex *createNode()
{
    Vertex *v;
    long i;

    v = new Vertex;

    v->totalPrefix = 0;
    v->totalWord = 0;
    v->vis = false;

    for (i = 0; i < 26; i++)
        v->edges[i] = NULL;

    return v;
}

int insertWord(Vertex *ver, string str, long len, long k)
{
    if (len == k)
    {
        ver->totalWord++;
        return ver->totalWord;
    }

    ver->totalPrefix++;

    if (!ver->edges[str[k] - 'a'])
    {

        ver->edges[str[k] - 'a'] = createNode();
    }

    return insertWord(ver->edges[str[k] - 'a'], str, len, k + 1);
}

long countWord(Vertex *ver, string str, long len, long k)
{
    if (len == k)
    {
        if (!ver->vis)
        {
            ver->vis = true;
        }
        else
        {
            return 0;
        }
        return ver->totalWord;
    }

    if (!ver->edges[str[k] - 'a'])
        return 0;

    return countWord(ver->edges[str[k] - 'a'], str, len, k + 1);
}
class Solution
{
public:
    // arr : given array of string
    // n : number of string in the array
    // return the expected answer

    string mostFrequentWord(string arr[], int n)
    {
        // code here
        Vertex *root = createNode();

        string ans;
        int co = 0;

        for (int i = 0; i < n; i++)
        {
            insertWord(root, arr[i], arr[i].size(), 0);
        }

        for (int i = 0; i < n; i++)
        {
            int temp = countWord(root, arr[i], arr[i].size(), 0);
            if (temp >= co)
            {
                co = temp;
                ans = arr[i];
            }
        }

        return ans;
    }
};