#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,main_parrents,to_m;
    int n, arr[200];
    memset(arr,0,sizeof arr);
    cin>>s>>main_parrents>>n;
    int len = (int)s.size();
    for(int i = 0;i<len;i++)
        arr[(int)s[i]]=1;
    while(n--)
    {
        cin>>to_m;
        bool flag=false;
        if((int)to_m.size()>(int)main_parrents.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
        if((int)main_parrents.size()-(int)to_m.size()>1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        len =(int)to_m.size();
        int j=0;
        for(int i = 0;i<len;i++)
        {

            if(to_m[i]==main_parrents[i] or (main_parrents[i]=='?' and arr[(int)to_m[i]]==1) or
               main_parrents[i]=='*')
            {
                continue;
            }flag = true;
                break;

        }
        //cout<<flag<<endl;

        if(flag ==false)
        {
            cout<<"YES"<<endl;
            continue;
        }
        string t="";
        for(int i = 0;i<(int)main_parrents.size();i++)
        {
            if(main_parrents[i]!='*')t+=main_parrents[i];
        }
        for(int i = 0;i<len;i++)
        {
            if(to_m[i]!=main_parrents[i] or (main_parrents[i]=='?' and arr[(int)to_m[i]]!=1) or
               main_parrents[i]!='*')
            {
                flag = true;
                break;
            }
            j++;
        }
         //cout<<j<<" "<<len<<endl;
        if(j==len)flag = false;
        if(flag==false)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
