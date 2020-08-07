#include <bits/stdc++.h>

using namespace std;

int co = 0;

bool ans(long long num)
{
    unsigned long long square = num * num, temp = num * num;
    if (num % 10 == 0)
        return false;
    long long len = 0;
    while (temp)
    {
        len++;
        temp /= 10;
    }

    len += len % 2;
    for (int i = len / 2; i > 0; i--)
    {
        temp = pow(10, i);
        unsigned long long partSum = (square / temp) + (square % temp);
        if (partSum == num)
        {
            co++;
            return true;
        }
    }

    return false;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
    {
        if (ans(i))
        {
            cout << i << " ";
        }
    }

    if (co == 0)
    {
        cout << "INVALID RANGE";
    }
    return 0;
}

//Modified Keprekar Number

// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     int p,q,c=0;
//     scanf("%d",&p);
//     scanf("%d",&q);
//  int count = 0;
//     for (long long i = p; i <= q; i++) {
//         long long square = i * i;
//         long long square_copy = square;
//         int digCount = 0;
//         while (square_copy) {
//             square_copy /= 10;
//             digCount++;
//         }
//         digCount += digCount%2;

//         long long power = 10;
//         for (long long k = 1; k < digCount/2; k++) {
//             power *= 10;
//         }
//         long long r = square % power;
//         long long l = square / power;
//         if (r + l == i) {
//           printf("%lld ", i);
//           count++;
//         }

//     }

//     if (count == 0) {
//         printf("INVALID RANGE");
//     }
//     return 0;
// }