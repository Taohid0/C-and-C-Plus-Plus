#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,m,n,x[1001],y[1001];
    cin>>test;
    while(test--)
    {
        cin>>m>>n;
        for(int i = 0;i<m-1;i++)
        {
            cin>>x[i];
        }
        for(int i=0;i<n-1;i++)
        {
            cin>>y[i];
        }
        sort(x,x+m-1);
        reverse(x,x+m-1);
        sort(y,y+n-1);
        reverse(y,y+n-1);
        int ans=0;
        int i=0,j=0;
        int l=1,v=1;
        while(i<m-1 and j<n-1)
        {
            if(x[i]>y[j])
            {
                ans+=x[i]*v;
                i++;
                l++;
            }
            else
            {
                ans+=y[j]*l;
                j++;
                v++;
            }
        }
        for(int i2=i;i2<m-1;i2++)
            ans+=x[i2]*v;
        for(int j2=j;j2<n-1;j2++)
            ans+=y[j2]*l;
        cout<<ans<<endl;
    }
    return 0;
}
