#define sz 3

struct Vertex
{
    long totalWord;
    Vertex *edges[sz];
    bool vis;
};

Vertex *createNode()
{
    Vertex *temp = new Vertex;
    temp->totalWord = 0;
    temp->vis = false;

    for (int i = 0; i < sz; i++)
    {
        temp->edges[i] = nullptr;
    }
    return temp;
}

void insertWord(Vertex *temp, int s[], int l, int p)
{
    if (l == p)
    {
        temp->totalWord++;
        return;
    }
    if (!temp->edges[s[p]])
    {
        temp->edges[s[p]] = createNode();
    }
    insertWord(temp->edges[s[p]], s, l, p + 1);
}

int countWord(Vertex *temp, int *s, int l, int p)
{

    if (l == p)
    {
        if (temp->vis)
            return 0;
        temp->vis = true;
        return temp->totalWord;
    }
    if (!temp->edges[s[p]])
    {
        return 0;
    }
    return countWord(temp->edges[s[p]], s, l, p + 1);
}

/*You are required to complete this function*/
vector<vector<int>> uniqueRow(int mat[MAX][MAX], int r, int c)
{
    Vertex *root = createNode();
    for (int i = 0; i < r; i++)
    {
        insertWord(root, mat[i], c, 0);
    }
    vector<vector<int>> ans;
    for (int i = 0; i < r; i++)
    {
        if (countWord(root, mat[i], c, 0))
        {
            vector<int> temp;
            for (int j = 0; j < c; j++)
            {
                temp.push_back(mat[i][j]);
            }
            ans.push_back(temp);
        }
    }

    return ans;
}