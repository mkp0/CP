class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
       vector<int> ans;
       map<int,int> m;
       int dist = 0;
       for(int i = 0; i < k;i++)
       {
           if(!m[A[i]])
           {
               dist++;
           }
           m[A[i]]++;
       }
       
       ans.push_back(dist);
       
       for(int i = k ; i < n ; i++)
       {
           m[A[i-k]]--;
           if(!m[A[i-k]])
           {
               dist--;
           }
           if(!m[A[i]])
           {
               dist++;
           }
           m[A[i]]++;
           ans.push_back(dist);
       }
       
       return ans;
    }
};