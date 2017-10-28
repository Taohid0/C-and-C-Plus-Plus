#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long temp,t,x,s;
    cin>>t>>s>>x;
    bool flag =true;
    int mul = 1;
    temp = t;
    if(x==0 && t>0){cout<<"NO"<<endl;flag= false;}
    else if(x==t){cout<<"YES"<<endl;flag =false;}
    else
    while(x>=temp+1)
    {
      //  cout<<t<<" "<<x<<endl;;
        temp = t+mul*s;
       // cout<<temp<<" ";
        if(x==temp || temp+1==x)
        {

            cout<<"YES"<<endl; flag = false;break;
        }
                 mul++;
    }
    if(flag)cout<<"NO"<<endl;


    return 0;
}
