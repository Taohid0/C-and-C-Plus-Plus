#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,text="hello";
    int counter=0;
    cin>>s;
    int len = (int)s.size();
    for(int i = 0;i<len;i++)
    {
        if(text[counter]==s[i])counter++;
        if(counter==5)break;
     }
    if(counter==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
