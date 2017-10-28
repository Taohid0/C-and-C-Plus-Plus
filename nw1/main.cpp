#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,value;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
       // temp=value;
        long long result=((2*2+value)/2)-2;
        cout<<"Case "<<i+1<<": "<<result<<endl;
    }
    return 0;
}
