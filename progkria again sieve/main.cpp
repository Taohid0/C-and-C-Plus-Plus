#include <bits/stdc++.h>

using namespace std;

bool prime[10000001] = {true};

void sieve(){
              prime[1] = prime[0] = false;
                 for(int i = 2;i*i<=10000000;i++){
                         if(prime[i]==true)
                    for(int j= i*i;j<=10000000;j+=i){
                        prime[j] =false;
                    }
                 }
                 }

int main()
{
    for(int i = 0;i<=10000000;i++){
        prime[i]=true;
    }
     sieve();

     for(int i = 0;i<=10000000;i++){
            if(prime[i]==true)
        cout<<i<<" ";
     }
    return 0;
}
