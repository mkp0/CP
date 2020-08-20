//Printing Forward and revese string using recursion
#include <bits/stdc++.h>

using namespace std;

void print(char *arr)
{
    if (arr[0] == '\0')
    {
        return;
    }
    cout << arr[0];
    print(arr + 1);
}
void printrev(char *arr)
{
    if (arr[0] == '\0')
        return;
    printrev(arr + 1);
    cout << arr[0];
}

int main()
{
    char str[] = "Mkp the great";
    print(str);
    cout << endl;
    printrev(str);
    return 0;
}