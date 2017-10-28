    #include <stdio.h>
    #include <math.h>

    #define BIGN 1000000

    int isp[BIGN];
    int p[BIGN];
    int cntp;

    void getp();
    int witness(long long a, long long n);
    long long pow_mod(long long a, long long b, long long n);
    long long mul_mod(long long x, long long y, long long n);
    int isprime_mr(long long n);
    int isprime(long long n);

    int main()
    {
        int n;
        getp();
        while (scanf("%d", &n), n)
        {
            int i = 0;
            printf("%d = ", n);
            if (n < 0)
            {
                n = -n;
                printf("-1 x ");
            }
            while (!isprime(n) && n != 1)
            {
                while (1)
                {
                    if (n % p[i] == 0)
                    {
                        printf("%d x ", p[i]);
                        n /= p[i];
                        break;
                    }
                    ++i;
                }
            }
            printf("%d\n", n);
        }
        return 0;
    }

    void getp()
    {
        long long i, j;
        isp[0] = isp[1] = 1;
        isp[2] = 0;
        cntp = 0;
        for (i = 2; i < BIGN; ++i)
        {
            if (!isp[i])
            {
                p[cntp++] = i;
                for (j = i * i; j < BIGN; j += i)
                {
                    isp[j] = 1;
                }
            }
        }
    }

    int isprime(long long n)
    {
        if (n < BIGN) return !isp[n];
        return isprime_mr(n);
    }

    int isprime_mr(long long n)
    {
        int i;
        if (n == 1 || n == 0) return 0;
        for (i = 0; p[i] < 1000 && p[i] < n; ++i)
            if (!(n % p[i])) return 0;
        if (n == 2 || n == 3 || n == 5 || n == 7) return 1;
        if (!witness(2, n)) return 0;
        if (!witness(3, n)) return 0;
        if (!witness(5, n)) return 0;
        if (!witness(7, n)) return 0;
        return 1;
    }

    int witness(long long a, long long n)
    {
        long long r = 0, s = n - 1, j;
        long long x;
        while (!(s & 1))
        {
            s >>= 1;
            ++r;
        }
        x = pow_mod(a, s, n);
        if (x == 1) return 1;
        for (j = 0; j < r; ++j, x = mul_mod(x, x, n))
            if (x == n - 1) return 1;
        return 0;
    }

    long long mul_mod(long long x, long long y, long long n)
    {
        long long T = floor(sqrt(n) + 0.5);
        long long t = T * T - n;
        long long a = x / T, b = x % T;
        long long c = y / T, d = y % T;
        long long e = a * c / T, f = a * c % T;
        long long v = ((a * d + b * c) % n + e * t) % n;
        long long g = v / T, h = v % T;
        long long ans = (((f + g) * t % n + b * d) % n + h * T) % n;
        while (ans < 0) ans += n;
        return ans;
    }

    long long pow_mod(long long a, long long b, long long n)
    {
        long long ans = 1, d = a % n;
        do {
            if (b & 1) ans = mul_mod(ans, d, n);
            d = mul_mod(d, d, n);
        } while (b >>= 1);
        return ans;
    }
