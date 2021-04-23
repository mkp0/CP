class Solution{

	public:
	
	int dp[1000001][2];
	
	int func(int n,int x ,int y, int geek)
	{
	    if((n==1) || (n==x) || (n==y))
	    {
	        return geek;
	    }
	    
	    if(dp[n][geek]!=-1)
	    return dp[n][geek];
	    int selx = 0, sely = 0, sel1 = 0;
	    if(!geek)
	    selx = sely = sel1 = 1;
	    
	    if(x<n)
	    {
	        selx = func(n-x,x,y,1-geek);
	    }
	    if(y<n)
	    {
	        sely = func(n-y,x,y,1-geek);
	    }
	    if(1<n)
	    {
	        sel1 = func(n-1,x,y,1-geek);
	    }
	    
	    if(geek)
	    dp[n][geek] = selx||sely||sel1;
	    else
	    dp[n][geek] = selx&&sely&&sel1;
	    
	    return dp[n][geek];
	    
	}
	
	int findWinner(int N, int X, int Y)
	{
	    //docs by masum ;)
		// step1 :- stats are N and geet or not (1/0)
		// step2 :- recursive function
		
		// so simple
		/*
		    func(n,geek)
		    {
		        if n==1 || n == x || n == y
		            return geek
		        
		        let selx = false ,sely = false, sel1 = false if  geek
		        let selx = true  ,sely = true , sel1 = true  if !geek
		        if x < n:
		            selx = func(n-x,!geek)
		        if y < n:
		            sely = func(n-y,!geek)
		        if  1 < n:
		            sel1 = func(n-1,!geek)
		            
		        if(geek)
		        return selx || sely || sel1; // geek needs one one
		        else
		        return selx && sely && selz // not geek needs one zero
		        
		    }
		*/
		
		// then memozation comes into the picture to store previos ans based on state
		
		// see my sol for better understanding hope you like it
		memset(dp,-1,sizeof(dp));
		
	   return func(N,X,Y,1);;
 	}

};