#include <bits/stdc++.h>

using namespace std;

bool isPrime (int n){
        if(n<2){
            return false;
        }
        else {
            for(int i = 2;i*i<=n;i++){
                if(n%i==0){
                    return false;
                }
            }
        }
        return true;
               }

int main()
{    int n;

    while(1){
      cout << "enter a number" << endl;
      cin>>n;
      if(isPrime(n)){
        cout << "this is  prime number \n" << endl;
      }
      else
        cout << "this is not prime number " << endl;
      }
    return 0;
}
