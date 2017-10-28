#include <bits/stdc++.h>

using namespace std;
struct node
{
    int l,r;
}cross[200005];
int main()
{
    long int arr[200005];
    memset(arr,-1,sizeof arr);
    long a,b,cost;
    int n,x;
    cin>>n>>x;
    for(int i = 1;i<=n;i++)
    {
        cin>>a>>b>>cost;
        int dif = abs(a-b)+1;
        if(arr[dif]==-1)
        {
            arr[dif] =cost;
            cross[dif].l = a;
            cross[dif].r = b;
        }
        else
        {
            if(arr[dif]>cost or (arr[dif]==cost and (cross[dif].l<a or cross[dif].r>b)))
            {
                arr[dif] =min(arr[dif],cost);
                cross[dif].l = a;
                cross[dif].r = b;
            }

        }
        //cout<<dif<<endl;

    }
    bool flag =false;
    long int ans =1000005;
    for(int i = 0;i<200002;i++)
    {
        int t = abs(x-i);
        //cout<<cross[i].l<<" "<<cross[i].r<<" "<<cross[t].l<<" "<<cross[t].r<<endl;
        if(arr[t]!=-1 and arr[i]!=-1 and (cross[t].r<cross[i].l or cross[i].r<cross[t].l) and i!=t)
        {

            ans = min(ans,arr[t]+arr[i]);
            //cout<<t <<" "<<i<<" "<<arr[t]<<" "<<arr[i]<<endl;
            flag = true;
        }
    }
    if(!flag)cout<<-1<<endl;
    else
        cout<<ans<<endl;
    return 0;
}
