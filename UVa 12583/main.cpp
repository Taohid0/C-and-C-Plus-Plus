#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,n,k,result;
    string s;
    cin>>test;
     for(int i=1;i<=test;i++)
    {
        result=0;
        cin>>n>>k;
        getchar();
        getline(cin,s);
        for(int j=1;j<n;j++)
        {
            for(int I=j-k;I<j;I++)
            {
                     if(I<0)I=0;
                if(s[j]==s[I])
                    {
                        result++;
                        break;
                    }
            }
        }
        cout<<"Case "<<i<<": "<<result<<endl;
    }
    return 0;
}
