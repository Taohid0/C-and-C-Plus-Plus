#include<bits/stdc++.h>
using namespace std;

int digit(long long int a)
{
    long long int i=0,j,k;
    while(a)
    {
        a/=10;
        i++;
    }
    return i;
}

long long int power(long int a)
{
    long long int i,j,k;
    j=1;
    a--;
    for(i=1;i<=a;i++)
    {
        j*=10;
    }
    return j*9;
}

int main()
{
    long long int a,b,c,n,m,i,j,x,y,yy;
    while(cin>>n)
    {
        x=digit(n);
        y=0;
        yy=0;
        for(i=1;i<x;i++)
        {
            y=y+(power(i)*i);
            //cout<<(power(i)*i)<<endl;
            yy=yy+(power(i));

        }


        //cout<<y<<endl;
        //cout<<yy<<endl;
        y=y+(n-yy)*x;

        cout<<y<<endl;
    }
    return 0;
}
