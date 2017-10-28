#include<bits/stdc++.h>

using namespace std;
int arr[1234567];
int main()
{
    int n,value;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>value;
        arr[value]++;
    }
    int ans=1;

    for(int i=2;i<=100005;i++)
    {
        int c=0;
        for(int j =i;j<=100005;j+=i)
        {
            c+=arr[j];
        }
        ans = max(ans,c);
    }
    cout<<ans<<endl;
    return 0;
}
