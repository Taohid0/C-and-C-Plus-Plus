#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,arr[1000],krr[1000];
    bool flag = false;
    set<int>st;
    cin>>n>>k;
    int t=-1;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(t==-1 and arr[i]==0)t=i;
    }
    for(int i=0;i<k;i++)
    {
        cin>>krr[i];
        st.insert(krr[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<=arr[i] and arr[i]!=0 and arr[i+1]!=0)
        {
            flag = true;
            break;
        }
    }
    if(flag and st.size()>1)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    if(st.size()==1 and (arr[t-1]>krr[0] or arr[t+1]<krr[0]))
       flag = true;

    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
