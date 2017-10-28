#include <bits/stdc++.h>

using namespace std;
int sieve_final[100000] = {0};
int sieveb[100000] = {0};
void sieve (int arr[],int n){
   for(int i = 2;i*i<=n;i++){
         if(arr[i]!=1){
            for(int j = i*i;j<=n;j+=i){
                arr[j] = 1;
            }
         }
   }
}
void sieve (int a,int b,int arr[],int n){
   for(int i = 2;i*i<=n;i++){
         if(arr[i]!=1){
            for(int j = a;j<=b;j+=i){
                arr[j] = 1;
            }
         }
   }
}
int main()
{   int a ,b;

    cout << "enter two numbers" << endl;
    cin>>a>>b;

    sieve(sieveb,b);
    sieve(a,b,sieve_final,b);


    return 0;
}
