#include <bits/stdc++.h>

using namespace std;

bool prime[10000001] = {false};
vector<int>p;

void sieve(){
              prime[1] = prime[0] = true;
                 for(int i = 2;i*i<=1000000;i++){
                         if(prime[i]==false)
                    for(int j= i*i;j<=1000000;j+=i){
                        prime[j] =true;
                    }
                 }
                 for(int i = 0;i<=1000000;i++){
                    if(!prime[i]){
                        p.push_back(i);
                       // cout<<i<<" ";
                    }
                 }
                 }
int divisors (int n){
              sieve();
              int result =1;


              for(int i= 0;p[i]*p[i]<=n;i++){
                  int cnt = 1;
                    if(n%p[i]==0){

                        while(n%p[i]==0){
                            cnt++;
                            n/=p[i];
                        }
                    }
                    result*=cnt;
              }
              return result;

              }
int main()
{int n;
cin>>n;

    cout << divisors(n) << endl;
    return 0;
}
