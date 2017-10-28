#include <bits/stdc++.h>

 void seive (int n,int primes[]);

int main()

{   int i,n = 500;
    int v[n];

    seive(n,v);

    for(i=0;i<n;i++){
            if (v[i]==1){
            printf("%d\n",i);
    }}

    return 0;
}
 void seive (int n,int primes[]){

     int i,j;

     for(i = 0;i<n;i++){
        primes[i] = 1;
     }
     primes[0] = 0;
     primes[1] = 1;

     for(i = 2;i<sqrt(n);i++){
        for(j = i*i;j<n;j+=i){
            primes[j] = 0;
        }
     }


 }
