#include <bits/stdc++.h>

using namespace std;

int main()
{
    int counter=0;
    string s;
    cin>>s;
    int len = (int)s.size();
    for(int i = 0;i<len-1;i++)
    {
        if(s[i]=='V' and s[i+1]=='K')
        {
            counter++;
            s[i]='.';
            s[i+1]='.';
            i++;
        }
    }
    for(int i = 0;i<len-1;i++)
    {
        if((s[i]=='V' and s[i+1]=='V')or (s[i]=='K' and s[i+1]=='K'))
        {
            counter++;
            break;
        }
    }
    cout<<counter<<endl;
    return 0;
}
