#include <bits/stdc++.h>

using namespace std;

bool check(string a,string b)
{
    int len =(int)a.size();
    for(int i = 0;i<len;i++)
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

int main()
{
    int test,n;
    int coutner=1;
    string arr[100006];
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool flag = false;
        for(int i =0;i<n-1;i++)
        {
            flag =check(arr[i],arr[i+1]);
            if(flag)break;
        }
        cout<<"Case "<<coutner++<<": ";
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
