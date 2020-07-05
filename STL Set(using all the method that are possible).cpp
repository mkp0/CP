//Sets
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s1;

    //inserting value inside an set
    s1.insert(10);
    s1.insert(12);
    s1.insert(8);
    s1.insert(14);
    s1.insert(16);

    //Opposite of insert is erase
    s1.erase(10);

    //Printing all value inside the set
    cout << "Printing all values inside set : ";
    for (auto x : s1)
    {
        cout << x << " ";
    }
    cout << endl;

    //Checking if set is empty or not
    if (s1.empty())
    {
        cout << "Yes set is empty" << endl;
    }
    else
    {
        cout << "set is not empty" << endl;
    }

    //Finding any perticular element inside or not
    auto finding = s1.find(12);

    if (finding != s1.end())
    {
        cout << "Yes we have that element " << *s1.lower_bound(12) << endl;
    }
    else
    {
        cout << "We aint find that element " << endl;
    }

    //size return the size of set
    int len = s1.size();
    cout << "No of element inside the set is : " << len << endl;

    cout << "No of element inside the set is : " << len << endl;
    //Clearing the set
    s1.clear();
    cout << "After Clear : ";
    for (auto x : s1)
    {
        cout << x << " ";
    }
    cout << endl;

    //Checking if set is empty or not
    if (s1.empty())
    {
        cout << "Yes set is empty" << endl;
    }
    else
    {
        cout << "set is not empty" << endl;
    }

    //Converting string into set
    string str1 = "techsnake";
    set<char> setOfStrign;

    for (char x : str1)
    {
        setOfStrign.insert(x);
    }

    cout << "Printig the set of charing from a string : ";

    for (char x : setOfStrign)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}