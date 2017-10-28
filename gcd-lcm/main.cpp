#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
           while(true){
            int remainder =a%b;

            if(remainder==0){
                return b;
            }
            else {
                b = remainder;
                a = b;
            }}
           }

int main()
{
    cout << "enter two numbers" << endl;
    int a,b;
    cin>>a>>b;

    if(a>b)
    cout<<gcd(a,b);
    else
         cout<<gcd(b,a);

    return 0;
}
