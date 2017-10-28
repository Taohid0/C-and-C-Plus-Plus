#include <bits/stdc++.h>

using namespace std;

int gcd (int a,int b){

             int remainder;
             while(1){
               remainder = a%b;
               if(remainder == 0){
                return b;
               }
               a = b;
               b = remainder;
             }
             }

int main()
{    int n1,n2;

    cout << "enter two numbers " << endl;
    cin>>n1>>n2;

    cout<<"gcd is " <<gcd(n1,n2);
    cout<<"\n lcm is "<<(n1*n2)/gcd(n1,n2);

    return 0;
}
