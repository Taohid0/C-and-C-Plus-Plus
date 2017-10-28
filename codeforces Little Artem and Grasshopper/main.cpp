#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[100005];
    string s;
    cin>>n;
    cin>>s;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    bool flag = false;
    int temo=n;
    int c=0;
    n++;
    bool mns=false;
    while(n--)
    {
        if(s[c]=='<')mns=true;
        if(mns)
            c-=arr[c];
        else
            c+=arr[c];
            //cout<<c<<endl;
        if(c<0 or c>=temo){flag=true;
        break;}
        mns=false;
    }
    if(flag)cout<<"FINITE"<<endl;
        else
        cout<<"INFINITE"<<endl;
    return 0;
}
