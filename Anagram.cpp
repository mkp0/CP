#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[1000000],b[10000000];
    cin>>a>>b;

    vector <int> arr(26,0);
    for(int i = 0 ; i < strlen(a) ; i++)
        arr[a[i]-'a']++;

    for(int i = 0 ; i < strlen(b) ; i++)
        arr[b[i]-'a']--;

    unsigned long long cou = 0;

    for(int i = 0 ; i < 26 ; i++)
        cou+=abs(arr[i]);

    cout<<cou;

    return 0;
}
