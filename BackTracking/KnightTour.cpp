
#include<bits/stdc++.h>
#define n 8

using namespace std;

bool issafe(int x,int y,int sol[n][n])
{
    return (x<n && x>=0 && y<n && y>=0 && sol[x][y]==-1);

}
bool solve(int x,int y, int mov, int sol[n][n], int xmov[n], int ymov[n])
{
    if(mov==n*n) return true;

    for(int i = 0 ; i < 8 ; i++)
    {
        int xnext = x + xmov[i];
        int ynext = y + ymov[i];

        if(issafe(xnext,ynext,sol))
        {
            sol[xnext][ynext] = mov;

            if(solve(xnext,ynext,mov+1,sol,xmov,ymov))
                return true;
            else
                sol[xnext][ynext]= -1;
        }
    }

    return false;
}

int main()
{
    int sol[n][n];
    int i,j;

    for(int i = 0 ; i < n ; i++)
        for(int  j = 0 ; j < n ; j++)
        sol[i][j] = -1;

    sol[0][0] = 1;

    int xmov[] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int ymov[]=  {  1, 2,  2,  1, -1, -2, -2, -1 };

    bool flag = solve(0,0,1,sol,xmov,ymov);

    if(flag)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<sol[i][j]<<"  ";
            cout<<"\n";
        }
    }
    else
        cout<<"Solution does not exist";
    return 0;
}
