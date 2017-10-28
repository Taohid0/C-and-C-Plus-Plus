#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
int i;
          for(i = 2;i*i<=n;i++){
               if(!(n%i)){
                break;
               }}
               if(i*i>n){
                return true;
               }

               return false;
               }



int main()
{   int n;
    cout << "enter a number" << endl;
    cin>>n;

    cout<<isPrime(n);

    return 0;
}
