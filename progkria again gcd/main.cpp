#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
             if(b>a){
                swap(a,b);
             }
             while(true){
                int remainder=  a%b;

                if(!remainder){
                    return b;
                }
                a  = b;
                b = remainder;
             }
             }

int main()
{      int a,b;
       cin>>a>>b;

    cout << gcd(a,b) << endl;
    cout<<(a*b)/gcd(a,b);
    return 0;
}
