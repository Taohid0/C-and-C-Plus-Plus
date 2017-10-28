#include <bits/stdc++.h>

using namespace std;

unsigned long long fact (int n)
{
    unsigned long long  r = 1;
    for(int i =1;i<=n;i++)
        r*=i;
    return r;
}
int main()
{
    ios::sync_with_stdio(false);
    string s;
    int t;
    unsigned long long n;
    int arr[27];

    cin>>t;
   // getchar();

    for(int i = 1;i<=t;i++)
    {
        memset(arr,0,sizeof(arr));
        n = 1;
        cin>>s;

        int len = (int)s.size();
        for(int j = 0;j<len;j++)
        {
            arr[s[j]-'A']++;
        }

        for(int j= 2;j<=len;j++)
        {
            n*=j;
        }

        for(int j = 0;j<27;j++)
        {
            if(arr[j]>0)n/= fact(arr[j]);
        }
        cout<<"Data set "<<i<<": "<<n;
        cout<<endl;
    }
    return 0;
}
