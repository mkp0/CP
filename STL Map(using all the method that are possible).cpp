#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, string> m1;
    m1.insert(pair<int, string>(0, "Masum"));
    m1.insert(pair<int, string>(14, "Shubham"));
    m1.insert(pair<int, string>(12, "Ankit"));
    m1.insert(pair<int, string>(33, "Rahul"));
    m1.insert(pair<int, string>(47, "Gautam"));

    //Printing the perticular value
    // cout << (m1.begin())->second << endl;
    // cout << (*m1.begin()).second << endl;

    // Printing all the value and key in the map
    for (auto it = m1.begin(); it != m1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    //Element having certain key
    // cout << m1[12] << endl;
    // cout << m1.at(12) << endl;

    // removing all the element in the map
    // m1.clear();

    //m1.empty return  true if map1 empty else return false
    if (m1.empty())
    {
        cout << "Map is empty";
    }

    //Size of the map ie total no (key,value) pair exits in the map
    cout << "Size of the map : " << m1.size() << endl;

    //Finding perticular (key , value ) pair exist or not as key is unique so it is used to find the location of that key value pair
    auto Finding = m1.find(32);

    if (Finding != m1.end())
    {
        cout << "We got it and its value is " << Finding->second << endl;
    }
    else
    {
        cout << "We aint got it" << endl;
    }

    //First iterator greater that perticular value is upper bound
    //First iterator greater than or equal to perticular value is called lower bound
    auto itub = m1.upper_bound(33);
    auto itlb = m1.upper_bound(33);

    //Upper Bound
    cout << itub->second << endl;
    //Lower Bound
    cout << itlb->second << endl;

    //Opposite of insert is erase ie removing certain (key,value) pair form map
    m1.erase(0);
    // for (auto it = m1.begin(); it != m1.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    cout << "Maximum size of array : " << m1.max_size() << endl;
    return 0;
}