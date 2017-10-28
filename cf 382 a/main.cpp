#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    string s;
    cin>>n>>k;
    getchar();
    getline(cin,s);
    bool flag =true;
    int first,second;
    for(int i=0;i<n;i++)
    {
       if(s[i]=='G' || s[i]=='T')
       {
           first = i;

           for(int j= i+1;j<n;j++)
           {
               if(s[j]=='T'|| s[j]=='G')
               {
                   second = j;

                   flag =false;
                   break;
               }
           }
       }

       if(!flag)break;


    }

    int dif =abs(first-second);

    bool rTest = false;

    for(int i=first;i<=second;i+=k)
    {

        if(s[i]=='#')
        {
            rTest = true;
            break;
        }

    }
     //cout<<rTest<<endl;
    if(rTest)
        cout<<"NO"<<endl;
    else if(dif%k)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
