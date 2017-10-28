#include <bits/stdc++.h>

using namespace std;

bool prime[100001] = {false};

void isPrime(){
                prime[0] = true;
                prime[1] = true;

                for(int i  = 2;i*i<=100000;i++){
                       if(!prime[i]){
                    for(int j = i*i;j<=100000;j+=i){
                        prime[j] = true;
                    }
                }}
                    }

int main(){

         isPrime();

         for(int i =0;i<=10000;i++){
            if(!prime[i]){
                cout<<i<<" " ;
            }
         }
         return 0;
}
