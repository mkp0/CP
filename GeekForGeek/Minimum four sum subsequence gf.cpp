int minSum(int arr[], int n)
{
   int dp[n+1] = {0};
   if(n==1)
   {
       return arr[0];
   }
   if(n==2)
   {
       return min(arr[0],arr[1]);
   }
   if(n==3)
   {
       return min(arr[0],min(arr[1],arr[2]));
   }
   if(n==4)
   {
       min(arr[0],min(arr[1],min(arr[2],arr[3])));
   }
   dp[1] = arr[0];
   dp[2] = arr[1];
   dp[3] = arr[2];
   dp[4] = arr[3];
   
   for(int i = 5 ; i<= n ;i++)
   {
       dp[i] = arr[i-1] +min(dp[i-1],min(dp[i-2],min(dp[i-3],dp[i-4])));
   }
   return min(dp[n-1],min(dp[n-2],min(dp[n-3],dp[n])));
}