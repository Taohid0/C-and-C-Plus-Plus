#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b,n,c,v,d;
     int reserve[100];
    while(cin>>b!=0 && cin>>n!=0)
    {
        for(int i = 1;i<=b;i++)
        {
         cin>>reserve[i];
        }
        for(int i = 1;i<=n;i++)
        {
            cin>>d>>c>>v;
            reserve[d] +=v;
            reserve[c]-=v;
        }
        bool bailOut = false;

        for(int i = 1;i<=b;i++)
        {
            if(reserve[i]<0)
            {
                bailOut =true;
                break;
            }
        }
        if(bailOut)
        {
            cout<<"N"<<endl;
        }
        else
            cout<<"S"<<endl;
    }
    return 0;
}
