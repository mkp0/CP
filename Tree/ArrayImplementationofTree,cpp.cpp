#include <bits/stdc++.h>

using namespace std;

char arr[100];

void root(char root)
{
    if (arr[0] != '\0')
    {
        cout << "Root Already Defied " << root<< endl;
    }
    else
    {
        arr[0] = root;
    }

    return;
}

void setL(char val, int pos)
{
    if (arr[pos] != '\0')
    {
        cout << "already have a value " << val<< endl;
    }
    if (arr[pos / 2] == '\0')
    {
        cout << "Have no parent " << val<< endl;
        return;
    }
    else
    {
        arr[pos] = val;
    }
}

void setR(char val, int pos)
{
    if (arr[pos] != '\0')
    {
        cout << "already have a value " << val<< endl;
    }
    if (arr[(pos - 1) / 2] == '\0')
    {
        cout << "Have no parent " << val<< endl;
        return;
    }
    else
    {
        arr[pos] = val;
    }
}

int main()
{
    root('A');
//    setL('B', 1);
    setR('C', 2);
    setL('D', 3);

    for (int i = 0; i < 4; i++)
    {
        if(arr[i])
        {
        	cout << arr[i];
		}
		else
		{
			cout<<"-";
		}
    }
    return 0;
}
