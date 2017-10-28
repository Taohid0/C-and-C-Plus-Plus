#include<bits/stdc++.h>

using namespace std;

unsigned long long int calculate(unsigned long long int a,unsigned long long int b,unsigned long long int temp)
{
   long long int r;
    r= (a-b*temp)*temp;
    return r;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
   long long int test,m1,n1,x1,y1,b1;
    cin>>test;
    while(test--)
    {
        cin>>n1>>b1;
        x1 = n1/(2*b1);
        y1 = x1+1;
        m1 = calculate(n1,b1,x1);
        n1 = calculate(n1,b1,y1);
       long long answer =max(m1,n1);
        cout<<answer;
        cout<<"\n";
    }
    return 0;
}
