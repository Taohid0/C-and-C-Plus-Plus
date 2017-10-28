#include <bits/stdc++.h>

using namespace std;
vector<int>prime;

bool marked[10000001] = {false};

void sieve(){
     marked[0] = true;
     marked[1] = true;
     for(int i = 2;i*i<=10000000;i++){
           if(marked[i]==false){
           for(int j = i*i;j<=10000000;j+=i){
                    marked[j] = true;
           }
     }}


      for(int i = 0;i<10000001;i++){
        if(marked[i]==false){
            prime.push_back(i);
            }
      }

               }
int main()
{
   long test,n1,n2;
    sieve();
    cin>>test;

    while(test--){

        cin>>n1>>n2;
        int result = 0;
        for(int i = n1;i<=n2;i++){
                if(i==0){i++;}
            int cnt = 0;

            if(marked[i]==true){
            for(int j = 0;j<=i && cnt<3;j++){
                if(i%prime[j] ==0 ){
                    cnt++;
                }
            }
            if(cnt == 1){
                result++;
            }}
        }
        cout<<result;
        if(test>1){
            cout<<endl;
        }
   }

    return 0;
}
