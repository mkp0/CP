#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the primeCount function below.
 */
int primeCount(long n) {
    int ans = 0;

    for(int i = 2 ; i < 100 && (n>=i) ; i++)
    {
        bool isPrime = true;

        for(int j = 2 ; j*j <= i ; j++)
        {
            if(i%j==0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            ans++;
            n/=i;
        }
    }

    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = primeCount(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
