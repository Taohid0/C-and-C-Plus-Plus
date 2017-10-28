#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,arr[1000],n;
    long long s1,s2;
    cin>>test;
    while(test--)
    {
        s1 = 0,s2 = 0;
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i = n-1;i>=0;i--)
        {
            if(s1<s2)
                s1+=arr[i];
            else
                s2+=arr[i];
        }
        cout<<abs(s1-s2);
        if(test)cout<<endl;
    }
    return 0;
}
