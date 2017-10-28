#include <cstdio>
#include <iostream>
#define MP 100
using namespace std;
bool ver[300]={false};
int list[1000];
int siever() {
    int i, j, k=0;
    list[k++]=2;
    for (i=3 ; i<=200 ; i+=2)
    {
        if (ver[i]==false)
        {
            list[k++]=i;
            for (j=3 ; i*j<=200 ; j+=2)
            {
                ver[i*j]=true;
            }
        }
    }
    list[0]=2;
    return k;
}

int test(int x, int p)
{
    int i, counter=0, temp, rem=1, n=x;
    for (i=x ; i>1 ; i--)
    {
        n=i;
        while (n%p == 0)
        {

            counter++;
            n/=p;
        }
    }
    return counter;
}

int main() {
    int pl=siever();
    int i, n;
    while (cin >> n && n)
    {
        printf("%3d! =",n);
        for (i=0 ; i<pl && list[i]<=n ; i++)
        {
            printf("%3d",test(n,list[i]));
            if (i%14 == 0 && i>0 && list[i+1]<=n) printf("\n%6c",' ');
        }
        printf("\n");
    }
    return 0;
}
