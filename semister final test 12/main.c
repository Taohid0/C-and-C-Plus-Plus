#include <stdio.h>
#include <stdlib.h>

int gcd (int n1,int n2){
        int a,b,t;
        a = n1;
        b = n2;
        while(a!=0){
                t = a;
                a = b%a;
                b = t;

        }
                   return b;}

int main()
{   int n1=6,n2=10;

    printf("%d\n",gcd(n1,n2));
    return 0;
}
