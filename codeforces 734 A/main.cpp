#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a= 0,d =0,n;
    string s;
    cin>>n>>s;
    int len = (int)s.size();
    for(int i = 0;i<len;i++)
    {
        if(s[i]=='A')a++;
        else d++;
    }
    if(a>d)cout<<"Anton"<<endl;
    else if(a<d)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}
