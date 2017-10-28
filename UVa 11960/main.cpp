#include <bits/stdc++.h>

using namespace std;

vector<int>divisors;

void divisor(){
             for(int i = 1;i<10004;i++){
                int result = 1;
                int temp = i;
                for(int j = 2;j*j<=i;j++){
                        int cnt = 1;
                    if(temp%j==0){
                        while(temp%j==0){
                            temp/=j;

                        }
                    }
                result*=cnt;
                }
                divisors.push_back(result);
             }}

int main()
{
    int test,n;
    divisor();

   cin>>test;
   while(test--){
      int result = -1;
      cin>>n;
      for(int i = 0;i<n;i++){
        if(divisors[i]>result){
            result = divisors[i];
        }
      }
      cout<<result;
      if(test>1){
        cout<<endl;
      }
   }
    return 0;
}
