#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1000],sum[1000],n,value;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>value;
        if(value==1)
            arr[i] = -1;
        else
            arr[i] = 1;
        if(i==0)
            sum[0] = arr[0];
        else
            sum[i] = arr[i]+sum[i-1];
        cout<<sum[i]<<" ";
    }
    if(n==1 and value==1)
    {
        cout<<0<<endl;
        return 0;
    }
    //cout<<sum[0]<<endl;;
    int sm = INT_MIN;
    for(int i = 0;i<n;i++)
    {
       int temp = 0;;
       for(int j = i;j<n;j++)
       {
           temp+=sum[j];
           sm = max(sm,temp);
           if(temp<0)
            temp = 0;
       }
       if(sm<0)sm = 0;
       //cout<<n-i+1-sm<<endl;

       sm = max(sm,n-i+1-sm);
    }
    cout<<sm<<endl;

    return 0;
}
