//Vector Container
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec;

    //additing any value into the vector container at the end
    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(15);
    vec.push_back(32);
    vec.push_back(11);

    //Removing any value into the vector container at the end
    // vec.pop_back();
    // vec.pop_back();

    //current size of vector container
    int len = vec.size();

    //element at certain postion
    int posElem1 = vec.at(3);
    int posElem2 = vec[4];

    //First Element in the Container
    int FirstElem = vec.front();
    //last Element in the Container
    int lastElem = vec.back();

    //Capacity of the container
    int capacity = vec.capacity();

    //inserting element at certain postion and moving the element including and after certain iterator to the next
    vec.insert(vec.begin() + 3, 22);

    //Oposite of inserting is erase
    // vec.erase(vec.begin()+2);

    //Removing all element in the vector
    // vec.clear();

    //New size of vector after clearing the vector
    // int newLen = vec.size();

    auto rbeginn = vec.rbegin();
    auto rendd = vec.rend() - 1;

    //Assign
    vector<int> vec1;

    //assigning default value to the first few element vec1.assign(no of element, value)
    vec1.assign(10, 0);

    //Accumulate:- Adding all the element in the vector
    int total = accumulate(vec.begin(), vec.end(), 0);

    //min element in the vector
    int minValue = *min_element(vec.begin(), vec.end());

    //max element in the vector
    int maxValue = *max_element(vec.begin(), vec.end());

    //Finding an element in the vector
    auto finding = find(vec.begin(), vec.end(), 11);

    cout << "Printing vector : \t\t\t\t";
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "size of vector container : \t\t\t" << len << endl;
    cout << "Element at certain indexed postion : \t\t" << posElem1 << endl;
    cout << "Element at certain indexed postion : \t\t" << posElem2 << endl;
    cout << "Element at First : \t\t\t\t" << FirstElem << endl;
    cout << "Element at last : \t\t\t\t" << lastElem << endl;
    cout << "Capacity of the container : \t\t\t" << capacity << endl;
    cout << "Element at certain position : \t\t\t" << vec[3] << endl;
    // cout << "New Length After clearing the vector : \t" << newLen << endl;
    cout << "default value of vector using assign function : " << vec1[0] << endl;
    cout << "Value of dereffernce of rbegin \t\t\t" << *rbeginn << endl;
    cout << "Value of dereffernce of (rend - 1) \t\t" << *rendd << endl;
    cout << "Sum of all value of the vector \t\t\t" << total << endl;
    cout << "Max value amoung all value of the vector \t" << minValue << endl;
    cout << "Max value amoung all value of the vector \t" << maxValue << endl;
    if (finding == vec.end())
    {
        cout << "Element NOT FOUND !! sorry " << endl;
    }
    else
    {
        cout << "We Find the Element we are looking for at index " << (finding - vec.begin()) << endl;
    }

    //SOMETHING MORE

    vector<int> v1 = {1, 2, 5, 0, 2, 4, 6, 1, 8, 7};
    vector<int> v2 = {0, 5, 2, 1, 2, 1, 6, 11};
    vector<int> v3(10, 0);
    vector<int> v4(10, 0);
    vector<int> v5(10, 0);

    //sorting of vector without comparator
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    //intersection of two vector
    auto ending3 = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    //Element which are present in set 1 not in set 2 will sore in set4
    auto ending4 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());

    auto ending5 = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v5.begin());

    cout << "Intersection : \t\t\t\t\t";
    for (auto x = v3.begin(); x != ending3; x++)
    {
        cout << *x << " ";
    }

    cout << endl;

    cout << "Difference : \t\t\t\t\t";
    for (auto x = v4.begin(); x != ending4; x++)
    {
        cout << *x << " ";
    }

    cout << endl;

    cout << "Union : \t\t\t\t\t";
    for (auto x = v5.begin(); x != ending5; x++)
    {
        cout << *x << " ";
    }

    cout << endl;

    return 0;
}