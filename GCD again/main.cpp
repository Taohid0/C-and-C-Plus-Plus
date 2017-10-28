#include <bits/stdc++.h>

using namespace std;

int gcd (int a,int b){
     int remainder;
    while(1)
    {
         remainder = a%b;
         if(remainder==0){
            return b;
         }
         a = b;
         b = remainder;


    }
}

int main()
{
    cout << gcd(48,6) << endl;
    return 0;
}
