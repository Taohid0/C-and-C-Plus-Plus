#include <bits/stdc++.h>

using namespace std;

void sieve(int n,int primes[]);


int main()
{   int n;

    while(1){
    cin>>n;
    if(n==0)
        break; if(n<0){
        printf("%d = -1 x",n);
    n*=-1;
    } else
        printf("%d = ",n);
    int v[100000];



sieve(n,v);
    for(int i = 0;i<=n;i++){


        if(v[i]==1){

           if(n==0){
            break;}
           if(n%i==0){
                n/=i;
            printf(" %d ",i);
           if((n/i)>0)
             printf("x");
            i = 0;
           }
        }
    }
    printf("\n");
    }

    return 0;
}
void sieve(int n,int primes[]){

        for(int i = 0;i<=n;i++){
            primes[i] = 1;
        }
        primes[0] = 0;
        primes[1] = 0;

        int k = sqrt(n);

        for(int j =2;j<=k;j++){
            for(int l = j*j;l<=n;l+=j){
                primes[l] = 0;
            }
        }
}

