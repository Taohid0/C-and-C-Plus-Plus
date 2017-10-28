#include <bits/stdc++.h>

using namespace std;

void sieve(int n,int primes[]);


int main()
{   int n;

    cout<<"enter a numbers : "<< endl;
    cin>>n;
    int v[n];
    sieve(n,v);

    for(int i = 0;i<=n;i++){
        if(v[i]==1){
            printf("%d ",i);
        }
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
