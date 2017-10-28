#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,value;
    bool flag = false;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>value;
        if(value==1)flag =true;
    }
    if(flag)
        cout<<-1<<endl;
    else
        cout<<1<<endl;
    return 0;
}
