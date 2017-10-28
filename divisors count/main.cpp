#include <bits/stdc++.h>

using namespace std;
bool marked[10000001] = {false};

 void sieve(){
     marked[0] =marked[1] = true;

             for(int i = 2;i*i<=10000000;i++){
                    if(marked[i]!=true){
                for(int j = i*i;j<=10000000;j+=i){
                    marked[j] = true;
                }

             } }}

int main()
{    vector<int>primes;
     sieve();

     for(int i = 2;i<=10000001;i++){
        if(marked[i]==false){
            primes.push_back(i);
        }
     }
     int n;
    cout << "enter a number \n" << endl;
    cin>>n;

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
      cout<<result;
    return 0;
}
