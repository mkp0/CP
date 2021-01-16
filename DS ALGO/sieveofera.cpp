const int N = 1e3 + 5;
// store if prime or not
int primes[N];
//stores the prime in pr
vector<int> pr;
void sieve()
{
    for (int i = 2; i < N; i++)
    {
        if (primes[i] == 0)
        {
            pr.pb(i);
            for (int j = i * i; j < N; j += i)
            {
                primes[j] = 1;
            }
        }
        primes[i] ^= 1;
    }
}