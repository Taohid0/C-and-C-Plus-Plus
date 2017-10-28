#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b;
    bool flag = false;

    cin>>a>>b;
    long long to_give=1;
    while(true)
    {
        if(!flag)
        {
            a-=to_give;
            if(a<0)break;
        }
        else
        {
            b-=to_give;
            if(b<0)break;
        }
        to_give++;
        flag = !flag;
    }
    if(!flag)cout<<"Vladik"<<endl;
    else
        cout<<"Valera"<<endl;
    return 0;
}
