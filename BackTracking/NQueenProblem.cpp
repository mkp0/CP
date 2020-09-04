#include <bits/stdc++.h>

using namespace std;

int board[100][100];
int n; //NxN matric is given

bool isSafe(int row, int col)
{
    for (int i = 0; i <= col; i++)
    {
        if (board[row][i])
        {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
        {
            return false;
        }
    }

    for (int i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if (board[i][j])
        {
            return false;
        }
    }

    return true;
}

bool NQUtil(int row, int col)
{
    if (col >= n) //recursion base case
    {
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(i, col))
        {
            board[i][col] = 1;
            if (NQUtil(i, col + 1))
            {
                return true;
            }
            else
            {
                board[i][col] = 0;
            }
        }
    }

    return false;
}

void NQ()
{
    if (NQUtil(0, 0))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Not Possible Bro !";
    }
}

int main()
{
    cin >> n;
    memset(board, 0, sizeof(board));

    NQ();
    return 0;
}