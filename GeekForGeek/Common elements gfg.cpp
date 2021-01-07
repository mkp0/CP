class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        vector<int> v;
        map<int, int> m;

        for (int i = 0; i < n1; i++)
        {
            if (m[A[i]] == 0)
                m[A[i]]++;
        }
        for (int i = 0; i < n2; i++)
        {
            if (m[B[i]] == 1)
                m[B[i]]++;
        }
        for (int i = 0; i < n3; i++)
        {
            if (m[C[i]] == 2)
                m[C[i]]++;
        }

        for (auto x : m)
        {
            if (x.second == 3)
            {
                v.push_back(x.first);
            }
        }

        return v;
    }
};