class Solution
{
public:
#define sz 27

    struct Vertex
    {

        long totalWord;
        long totalPrefix;
        Vertex *edges[sz];
    };

    Vertex *createNode()
    {
        Vertex *v;
        long i;

        v = new Vertex;

        v->totalPrefix = 0;
        v->totalWord = 0;

        for (i = 0; i < 26; i++)
            v->edges[i] = NULL;

        return v;
    }

    void insertWord(Vertex *ver, string str, long len, long k)
    {
        if (len == k)
        {
            ver->totalWord++;
            ver->totalPrefix++;
            return;
        }

        ver->totalPrefix++;

        if (!ver->edges[str[k] - 'a'])
        {

            ver->edges[str[k] - 'a'] = createNode();
        }

        insertWord(ver->edges[str[k] - 'a'], str, len, k + 1);
    }

    long countWord(Vertex *ver, string str, long len, long k)
    {
        if (len == k)
            return ver->totalPrefix;

        if (!ver->edges[str[k] - 'a'])
            return 0;

        return countWord(ver->edges[str[k] - 'a'], str, len, k + 1);
    }

    int klengthpref(string arr[], int n, int k, string str)
    {
        Vertex *root = createNode();

        for (int i = 0; i < n; i++)
        {
            insertWord(root, arr[i], arr[i].size(), 0);
        }

        return countWord(root, str, k, 0);
    }
};