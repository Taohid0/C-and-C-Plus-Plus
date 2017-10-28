#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,t,arr[10005];
    while(scanf("%d%d%d",&m,&n,&t)==3){
    arr[0]=0;
    for(int i=1;i<=t;i++)
    {
        arr[i]=-1;
        if(i>=m and arr[i-m]>=0)
        {
            arr[i]=arr[i-m]+1;
        }

        if(i>=n and arr[i-n]>=0)
        {
            arr[i]=max(arr[i],arr[i-n]+1);
        }
    }
    if(arr[t]!=-1)cout<<arr[t]<<endl;
    else
    {
        int counter=1;
        while(arr[t-counter]==-1)counter++;
        cout<<arr[t-counter]<< " "<<counter<<endl;
    }
    }

    return 0;
}
