#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    //min element
    cout << "Min : " << min(a, b) << endl;
    //max
    cout << "Max : " << max(a, b) << endl;

    //minmax return pair with first element is small and next is heighter
    auto temp = minmax(a, b);

    //minmax.first
    cout << "Minmax.First : " << temp.first << endl;
    cout << "Minmax.Second : " << temp.second << endl;

    int arr[] = {4, 2, -1, 8, 5, 3}; //6 values present

    cout << "Max Element : \t" << *max_element(arr, arr + 6) << endl; //max_element return the address of max element in a container
    cout << "Min Element : \t" << *min_element(arr, arr + 6) << endl; //min_element return the address of min element in a container

    return 0;
}