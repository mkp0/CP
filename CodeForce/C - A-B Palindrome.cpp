#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pi (3.141592653589)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define S second
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i= i + (c))
using namespace std;


/* I am gonna be the King of the Pirates */
int mod = 1e9+7;

void solve()
{
     int arr[2];
     cin>>arr[0]>>arr[1];
     string s;
     cin>>s;
    int n = s.size();


    for(int i = 0 ; i < n ;i++)
    {
        if(s[i]!='?')
        arr[s[i]-'0']--;
    }

    if(arr[0]<0 || arr[1]<0)
    {
        cout << -1 <<endl;
        return;
    }

    
    for(int i = 0 ; i <= (n-1)/2 ;i++)
    {
        if(s[i]==s[n-1-i])
        {
            continue;
        }
        if(s[i]=='?'||s[n-1-i]=='?')
        {
            if(s[i]=='1' || s[n-1-i]=='1')
            {
                if(!arr[1])
                {
                    cout << -1 <<endl;
                    return;
                }
                arr[1]-=1;
                s[i] = '1';
                s[n-1-i] = '1';
            }
            else
            {
                if(!arr[0])
                {
                    cout << -1 <<endl;
                    return;
                }
                arr[0]-=1;
                s[i] = '0';
                s[n-1-i] = '0';
            }
        }else{
            cout << -1 <<endl;
            return;
        }
    }


    for(int i = 0; i <= (n-1)/2 ;i++)
    {
       if(s[i] == '?')
       {
       if(i== (n-1-i))
       {
           if(arr[0])
               s[i] = '0';
            else if(arr[1])
            {
                s[i] = '1';
            }else{
                cout << -1 << endl;
                return;
            }
        }else{
           if(arr[0]>=2)
           {
               s[i] = '0';
               s[n-1-i] = '0';
               arr[0]-=2;
           }else if (arr[1]>=2)
           {
               s[i] = '1';
               s[n-1-i] = '1';
               arr[1] -= 2;
           }else{
               cout << -1 <<endl;
               return;
           }
       }
       }
    }

    cout << s <<endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}