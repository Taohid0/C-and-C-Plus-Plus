#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int counter=0,len;
    cin>>s;
    len = (int)s.size();

    if(len==1)
    {
        cout<<"YES"<<endl;
        return 0;

    }
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
            counter++;
    }
    //cout<<counter;
    if(len%2 and counter==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(counter==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
