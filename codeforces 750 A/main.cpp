#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,r=0;
    cin>>a>>b;
    b= 240-b;
    for(int i =1;i<=a;i++)
    {
        if(i*5<=b)
        {
            b-=i*5;
            r++;
        }
    }
    cout<<r<<endl;
    return 0;
}
