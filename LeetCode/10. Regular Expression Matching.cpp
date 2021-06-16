class Solution {
public:
    int dp[21][31];
    
    bool func(string s,string p,int st,int pt)
    {
        if(st<0 && pt<0)
            return true;
        if(st<0 && p[pt]=='*')
            return func(s,p,st,pt-2);
        else if(st<0 || pt<0)
            return false;
        
        if(isalpha(p[pt]))
        {
            if(s[st]!=p[pt])
            {
                return false;
            }
        }
        bool ans = false;
        if(p[pt]!='*')
          ans = func(s,p,st-1,pt-1); 
        
        if(p[pt]=='*')
        {
            ans = ans || func(s,p,st,pt-2); 
            if(s[st] == p[pt-1] || (p[pt-1]=='.'))
            ans = ans || func(s,p,st-1,pt);
        }
        
        return ans;
    }
    
    bool isMatch(string s, string p) {
        memset(dp,-1,sizeof(dp));
        bool ans = func(s,p,s.size()-1,p.size()-1);
        return ans;
    }
};