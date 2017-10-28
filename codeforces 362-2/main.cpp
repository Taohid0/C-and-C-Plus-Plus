#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y,z;
    char ch;
    long int a,b,n,i,l,j,m;
    cin>>a;
    cin>>ch;
    //cout<<a<<endl;
    for(i=0;i<1000;i++)
    {
        j=0;
        j++;
        m++;
    }
    i=0;
    //cout<<ch<<endl;
    while(scanf("%1d",&b)==1)
    {
        //cout<<b<<endl;
        y = y + "" +(char)(b+'0');
    }
    //cout<<y<<endl;
    cin>>ch;
    //cout<<"E "<<ch<<endl;
    cin>>n;
    //cout<<"N "<<n<<endl;

    if(n==0)
    {
        if(y=="0")
            cout<<a<<endl;
        else
        cout<<a<<"."<<y<<endl;

    }
    else if(n>0 && n<y.size())
    {
        cout<<a;

        for(i=0;i<y.size();i++)
        {
            if(i==n)
                cout<<'.';
            cout<<y[i];

        }
        cout<<endl;
    }
    else if(n==y.size())
    {
        cout<<a<<y<<endl;
    }
    else if(n>y.size())
    {
        cout<<a<<y;
        l=n-y.size();
        for(i=0;i<l;i++)
        {
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
