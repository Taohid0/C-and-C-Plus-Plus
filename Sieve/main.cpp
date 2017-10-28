#include <stdio.h>

#include <math.h>


void sieve(int n, int primes[]);


int main()

{

    int i, n = 500; // find the primes up to 500000

    int v[n];

    sieve(n, v);

    for (i=0;i<n;i++)

        if (v[i] == 1)

            printf("%d\n",i); // this just prints out each value if it's Prime

}


void sieve(int n, int primes[])

{

    int i, j;

    for (i=0;i<n;i++)

        primes[i]=1; // we initialize the sieve list to all 1's (True)

    primes[0]=0,primes[1]=0; // Set the first two numbers (0 and 1) to 0 (False)

    for (i=2;i<sqrt(n);i++) // loop through all the numbers up to the sqrt(n)

        for (j=i*i;j<n;j+=i) // mark off each factor of i by setting it to 0 (False)

            primes[j] = 0;

}

