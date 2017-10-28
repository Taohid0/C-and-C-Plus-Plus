#include <bits/stdc++.h>

using namespace std;

 long fib[100000];

void fib_temp()
{
        fib[0]= 1;
        fib[1] = 1;

        for(int i = 2;i<100000;i++)
        {
            fib[i] = fib[i-1]+fib[i-2];
        }

}

int main()
{
    long n;

    fib_temp();

    while(scanf("%ld",&n)&& n>=0)
    {

        cout<<fib[n-1]+fib[n-2]+1<< " "<<fib[n]<<endl;


    }
    return 0;
}
