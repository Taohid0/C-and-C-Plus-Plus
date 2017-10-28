#include <bits/stdc++.h>

using namespace std;

void sieve (int arr[],int n){
   for(int i = 2;i*i<=n;i++){
         if(arr[i]!=1){
            for(int j = i*i;j<=n;j+=i){
                arr[j] = 1;
            }
         }
   }
}
int main()
{   int n;
    cout << "enter a number" << endl;

    cin>>n;

    int prime[10000] = {0};

    sieve(prime,n);
    for(int i  = 2;i<n;i++){
        if(prime[i]==0){
            cout<<i<<" " ;
        }
    }
    return 0;
}
