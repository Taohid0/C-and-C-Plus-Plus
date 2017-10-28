#include <bits/stdc++.h>

using namespace std;
int arr[100000];

int binSearch(int l,int h,int v)
{
    int counter=0;
    for(int i =l;i<=h;i++)
    {
        if(v>arr[i])counter++;
    }

    return counter;
}

int main()
{
    int m,n,l,r,x;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i =1;i<=m;i++)
    {
        cin>>l>>r>>x;
        int temp = arr[x];
        int p = binSearch(l,r,temp);
        if(arr[p+l]!=temp)cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
