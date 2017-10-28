#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a,b,row,col,r[100002],c[100001],ans=0;
    cin>>row>>col;
    ans= row*row;
    while(col--)
    {
        cin>>a>>b;
        if(r[a]==0 and c[b]==0)
        {
            ans-=2*row-1;
            r[a]=1;
            c[b]=1;
        }
        else if((r[a]==0 and r[b]==1)or (r[a]==1 and r[b]==0))
        {
            ans-=row-1;
            r[a]=1;
            c[b]=1;
        }
        cout<<ans<<" "<<endl;

    }
    return 0;
}
