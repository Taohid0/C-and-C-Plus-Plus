#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long gen[100];
    gen[0]= gen[1] = 1;

     for(int j = 2;j<81;j++){
        gen[j] = gen[j-1] + gen[j-2];
     }
     while(scanf("%d",&n)==1){
        if(!n)break;

        printf("%lld\n",gen[n]);

     }
    return 0;
}
