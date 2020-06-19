// N Queen Problem
#include <bits/stdc++.h>
#define N 100
#define count 0
using namespace std;

int n, board[N][N] = {{0}};


void printSol () {

	cout << "Solution is:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << board[i][j] << "\t";
		}
		cout << endl;
	}

	cout<<count;
}

bool isSafe(int row , int column){

    for(int i = 0 ; i <= column ; i++)
        if(board[row][i])
        return false;

    for(int i = row , j = column ; i>=0&&j>=0 ; i--, j--)
        if(board[i][j])
        return false;

    for(int i = row , j = column ; i<n&&j>=0 ;i++,j--)
        if(board[i][j])
        return false;

    return true;
}

bool NQueenUtil(int col)
{
    if(col>=n)return true;

    for(int i = 0 ; i < n ; i++)
    {
        if(isSafe(i,col))
        {
            board[i][col] = 1;

            if(NQueenUtil(col+1))
                return true;
            else
                board[i][col] = 0;
        }
    }

    return false;
}

void NQueen()
{
    if(NQueenUtil(0))
    {
        printSol();
    }
    else
    {
        cout<<"There is no Solution !!";
    }
}

int main()
{
    cout<<"Enter the size of Board ";
    cin>>n;
    NQueen();

    return 0;
}
