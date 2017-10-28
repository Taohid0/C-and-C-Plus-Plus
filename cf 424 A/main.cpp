#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[1000],mxid,mx=-11;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
        {
            mx= arr[i];
            mxid = i;
        }

    }
    for(int i = 0;i<mxid-1;i++)
    {
        if(arr[i]<arr[i+1])
            continue;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(int i= mxid;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])mxid++;
    }
    for(int i = mxid;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
            continue;
        else
            {
                cout<<"NO"<<endl;
                return 0;
            }

    }
    cout<<"YES"<<endl;
    return 0;
}
