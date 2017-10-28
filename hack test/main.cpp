#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int counter=0,len;
    cin>>s;
    len = (int)s.size();

    int a=len/2;
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
            counter++;
    }
    //cout<<counter;
    if(counter==1 or len==1)
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
