// C++ program for activity selection problem.
// The following implementation assumes that the activities
// are already sorted according to their finish time
#include <bits/stdc++.h>

using namespace std;

// Prints a maximum set of activities that can be done by a single
// person, one at a time.
// n --> Total number of activities
// s[] --> An array that contains start time of all activities
// f[] --> An array that contains finish time of all activities
void printMaxActivities(int s[], int f[], int n)
{
    if (n == 0)
    {
        printf("NO ACIVITY CAN PERFORM");
        return;
    }

    cout << "Following activity can perform: ";
    cout << 0 << " ";
    int prevF = f[0];

    for (int i = 1; i < n; i++)
    {
        if (s[i] >= prevF)
        {
            cout << i << " ";
            prevF = f[i];
        }
    }
}

// driver program to test above function
int main()
{
    int s[] = {1, 3, 0, 5, 8, 5};
    int f[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(s) / sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}
