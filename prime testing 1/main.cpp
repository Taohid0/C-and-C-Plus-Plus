#include <bits/stdc++.h>

using namespace std;
bool is_prime (int n){
        }
int main()
{  int n,i;


   while(1){
    cout << "enter a number \n" << endl;
    cin>>n;
     if(n<2){
        cout<<"this is not a prime number\n";
     }
     else {
        for(i = 2;i*i<=n;i++){
            if(n%i==0){
                    cout<<"this is not prime \n";
                break;
            }
        }
        if(i*i>n){
            cout<<"this number is prime\n";
        }
     }
    }
    return 0;
}
