int findSum(string str)
{
	
	int su = 0;
	
	int n = str.size();
	
	for(int i = 0 ; i < n ;i++)
	{
	    if(str[i]>='0' && str[i]<='9')
	    {
	        int val = 0;
	        while(str[i]>='0' && str[i]<='9' && i<n)
	        {
	            val = val*10 + (str[i]-'0');
	            i++;
	        }
	        su += val;
	    }
	}
	return su;
	
}