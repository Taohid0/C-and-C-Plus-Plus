#include <bits/stdc++.h>

using namespace std;
vector<int>prime;

bool marked[1000001] = {false};

void sieve(){
     marked[0] = marked[1] = true;
     for(int i = 2;i*i<=1000000;i++){
           if(marked[i]==false){
           for(int j = i*i;j<=1000000;j+=i){
                    marked[j] = true;
           }
     }}


      for(int i = 0;i<1000001;i++){
        if(marked[i]==false){
            prime.push_back(i);
            }
      }

               }

int main()
{sieve();
//    for(int i = 0;i<10000;i++){
//        if(marked[i]==false){
//            prime.push_back(i);        }
//    }
    for(int i = 0;i<(int)prime.size();i++){
        cout<<prime[i]<<" " ;
    }
//    for(int i = 0;i<1001;i++){
//        if(marked[i]==false){
//            cout<<i<< " ";
//        }
//    }
    return 0;

}
