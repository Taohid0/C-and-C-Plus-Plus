#include <bits/stdc++.h>


using namespace std;

int main()
{
    int ans=0,money,test;
    cin>>test;
    string s;

    for(int i=0;i<test;i++){
            cin>>s;
         //  cout<<s;
        if(s=="donate"){

           cin>>money;
            ans+=money;
        }

        else if(s=="report")
            cout<<ans<<endl;
    }

    return 0;
}
