long long mod = 1e9 + 7;

// addition
long long modadd(long long a, long long b)
{
    long long ans = (a % mod + b % mod) % mod;

    return ans;
}

// substraction
long long modsub(long long a, long long b)
{
    long long ans = (a % mod - b % mod + mod) % mod;

    return ans;
}

// multipication
long long modmul(long long a, long long b)
{
    long long ans = (a * b) % mod;

    return ans;
}

// division
long long moddiv(long long a, long long b)
{
    long long ans = (a * modInverse(b)) % mod;

    return ans;
}

//------------------ mod is prime ---------------------
long long po(long long a, long long b)
{
    long long x = 1;

    a %= mod;
    while (b)
    {
        if (b & 1)
        {
            x = x * a % mod;
        }
        a = a * a % mod;
        b /= 2;
    }
    return x;
}

long long modInverse(long long A)
{
    return po(A, mod - 2);
}

// ----------------if mod whatever-------------------

int mix, miy, gcdbwithm; //mod-inverse x, mod-inverse y
void extendedEuclid(long long A, long long B)
{
    if (B == 0)
    {
        gcdbwithm = A;
        mix = 1;
        miy = 0;
    }
    else
    {
        extendedEuclid(B, A % B);
        int temp = mix;
        mix = miy;
        miy = temp - (A / B) * miy;
    }
}

long long modInverse(long long A)
{
    extendedEuclid(A, mod);
    return (mix % mod + mod) % mod; //x may be negative
}
