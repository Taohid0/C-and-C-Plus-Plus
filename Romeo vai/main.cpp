#include <bits/stdc++.h>

using namespace std;
bool marked[1000000001] = {false};

 void sieve(){
     marked[0] =marked[1] = true;

             for(int i = 2;i*i<=1000000000;i++){
                    if(marked[i]!=true){
                for(int j = i*i;j<=1000000000;j+=i){
                    marked[j] = true;
                }

             } }}

int main()
{    vector<int>primes;
     sieve();

     for(int i = 2;i<=1000000001;i++){
        if(marked[i]==false){
            primes.push_back(i);
        }
     }
     int n;

   while (scanf("%d",&n)!=EOF){

    int result = 1;

      for(int i =0;i<(int)primes.size();i++ ){
         int cnt = 1;
        if(n%primes[i]==0){
            while(n%primes[i]==0){
                n/=primes[i];
                cnt++;
            }
        }
        result*=cnt;

      }
    if(result%2==0){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
      }
    return 0;
}
