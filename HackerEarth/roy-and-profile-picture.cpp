#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    int minLength;

    cin >> minLength;
    cin >> test_case;

    while (test_case)
    {
        int height, width;
        cin >> height >> width;

        if ((minLength > height) || (minLength > width))
        {
            cout << "UPLOAD ANOTHER" << endl;
        }
        else if ((height == minLength) && (width == minLength))
        {
            cout << "ACCEPTED" << endl;
        }
        else if (height == width)
        {
            cout << "ACCEPTED" << endl;
        }
        else
        {
            cout << "CROP IT" << endl;
        }

        test_case--;
    }

    return 0;
}