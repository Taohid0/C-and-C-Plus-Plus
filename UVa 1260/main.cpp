#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
int nCase,tCase;
cin>>nCase;
for(tCase=1;tCase<=nCase;tCase++)
{
int n,arr[1010],i,j,c=0;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>arr[i];
for(j=1;j<i;j++)
{
if(arr[j]<=arr[i])
{
c++;
}
}
}



cout<<c<<endl;
}
return 0;
}

