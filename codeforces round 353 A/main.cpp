#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long a,b,c;
    bool flag = true;

    cin>>a>>b>>c;
    if(c==0 )
    {
        if(a==b){
        flag =false;
        cout<<"YES"<<endl;
    }
    }
    else if(a==b)
    {  flag =false;
        cout<<"YES"<<endl;
    }
    else{
    int loop = abs(ceil(1000000001/c));
    for(int i = 1;i<=loop;i++)
    {
         a+=c;
         if(a==b)
         {
             cout<<"YES"<<endl;
             flag = false;
             break;
         }
    }
    }
    if(flag)cout<<"NO"<<endl;
    return 0;
}
