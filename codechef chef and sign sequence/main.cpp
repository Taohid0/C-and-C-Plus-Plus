#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    string s;
    int counter,ans;
    cin>>test;
    while(test--)
    {
        string str="";
        cin>>s;
        int len = (int)s.size();
        counter=0,ans=0;


        for(int i =0;i<len;i++)
        {
            if(s[i]!='=')str+=s[i];
        }
        str+='=';
        bool flag = false;
        len = (int)str.size();
        for(int i = 0;i<len;i++)
        {
            if(str[i]=='=')continue;
            else if(str[i]==str[i+1])
               {
                   counter++;
                   flag =true;
               }
            else if(str[i]!=str[i+1])
            {
                ans = max(ans,counter);
                counter=0;
                flag = true;
            }

        }
        if(!flag)
            cout<<1<<endl;
        else
            cout<<ans+2<<endl;

    }
    return 0;
}
