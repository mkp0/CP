//Transpose of a Matrix
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int mat[row][col];

    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            cin>>mat[i][j];
        }
    }

    //Transpose of Matrix

    for(int i = 0 ; i < row; i++ )
    {
        for(int j = i+1 ; j < col ; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            cout<<mat[i][j]<< "|";
        }
        cout<<endl;
    }



    return 0;
}
