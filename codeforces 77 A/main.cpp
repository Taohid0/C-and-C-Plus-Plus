#include <bits/stdc++.h>

using namespace std;

int main()
{
    int counter =1;
    string s;
    int len;
    cin>>s;
    len = (int)s.size();
    for(int i =0;i<len-1;i++)
    {
        if(s[i]==s[i+1])
        {
            counter++;
        }
        else
        {
         counter=1;
        }
        //cout<<counter<<endl;
        if(counter>=7)
            break;
    }
    //if(s[len-1]==s[len-2])counter++;

    if(counter>=7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
