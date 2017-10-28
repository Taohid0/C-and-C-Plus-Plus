#include <bits/stdc++.h>

using namespace std;

int main()
{   long n,fib[5],tmp;

    while(scanf("%ld",&n)==1){

        fib[1] = 1;
        fib[2] = 1;

        for(int i = 1;i<n-1;i++){
            tmp = fib[1] + fib[2];
            fib[1] = fib[2];
            fib[2] = tmp;
        }
        printf("%ld\n",tmp);
    }

    return 0;
}
