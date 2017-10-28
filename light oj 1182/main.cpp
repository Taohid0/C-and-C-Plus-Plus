#include <bits/stdc++.h>

using namespace std;

int ones(int n)
{
    int counter = 0;
    while(n)
    {
        int tem = n%2;
        n/=2;
        if(tem)counter++;
    }

    return counter;
}

int main()
{
    int n,value;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>value;
        if(ones(value)%2==0)
            cout<<"Case "<<i<<": "<<"even"<<endl;
        else
            cout<<"Case "<<i<<": "<<"odd"<<endl;
    }

    return 0;
}
