#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n,m;

    while(scanf("%ld%ld",&m,&n)==2){
        long sum = 0;
        for(int i = 1;i<=m;i++){
            sum+=i*pow(m,i);
        }
        printf("%ld\n",sum);
    }

    return 0;
}
