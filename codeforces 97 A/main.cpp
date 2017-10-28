#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = (int)s.size();
    int counter = 0;
    for(int i = 1;i<len;i++)
    {
        if(s[i-1]==s[i])
        {
            counter++;
        }
        else
            counter=0;
        if(counter>=7)
            break;
    }
    if(counter>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
