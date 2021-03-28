int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  priority_queue<int> pq;
  
  for(int i = 0 ; i < n ; i++)
  {
      for(int j = 0 ; j < n ; j++)
      {
          if(pq.size()<k)
          {
            pq.push(mat[i][j]);   
          }
          else if(mat[i][j]<pq.top())
          {
              pq.pop();
              pq.push(mat[i][j]);
          }
      }
  }
  return pq.top();
}