//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   stack<int> s;
   
   for(int i = 0 ; i < n ;i++)
   {
       s.push(arr[i]);
   }
   
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    vector<int> ans;
    
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    
    int n = ans.size();
    
    for(int i = n-2 ; i >= 0 ;i--)
    {
        ans[i] = min(ans[i],ans[i+1]);
    }
    
    for(int i = 0 ;i < n ;i++)
    {
        cout << ans[i] << " ";
        s.pop();
    }
    
    cout <<endl;
    
}