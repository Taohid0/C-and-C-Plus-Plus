#include <bits/stdc++.h>
int primes[20000010];
int primes2[20000010];

void sieve(){
        int i,j;int l = 0;
        for(i = 0;i<20000010;i++){
            primes[i] = 1;
        }
        primes[0] = 0;
        primes[1] = 0;
            int tmp = sqrt(20000010);
        for(i = 2;i<tmp;i++){
            for(j = i*i;j<20000010;j+=i){
                primes[j] = 0;
            }
        }
        for(int k = 0;k<20000010;++k){
        if(primes[k]){
           primes2[l++] = k;}
        }}
int main()
{   int i,n;
   sieve();
   while(scanf("%d",&n)==1)
    {


   int temp = 0;

    for(i = 0;i<20000010;i++){
        if(primes2[i+1]-primes2[i]==2){
                 temp++;
                 if(temp==n){

        printf("(%d, %d)\n",primes2[i],primes2[i+1]);
    }}}}
    return 0;
}
