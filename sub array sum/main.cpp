#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,n,arr[5005],k;
    long long int sum[5005];
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        cin>>n>>k;
        cin>>arr[1];
        sum[0]=0;
        sum[1]=arr[1];
        for(int i = 2;i<=n;i++)
        {
            scanf("%d",&arr[i]);
            sum[i]=sum[i-1]+arr[i];

            cout<<sum[i]<<endl;

        }
        long long int ans = INT_MIN;
        int pn = INT_MIN,counter=0;
        long long int temp=0;
        for(int i = 0;i<=n;i++)
        {
            temp=0;
            counter=0;
            if(sum[i]<arr[i])sum[i]=arr[i];
            long long int prev=arr[i];
            for(int j=i+1;j<=n;j++)
            {
                temp = sum[j]-sum[i];
                temp= max(temp,prev);
                if(counter<k and arr[j]<0)
                {
                    counter++;
                    temp-=arr[j];
                    if(pn>arr[j])
                        pn=arr[j];
                    cout<<temp<<" "<<arr[j]<<endl;

                }
                else if(arr[j]<j)
                {
                    if(pn>arr[j])
                    {

                        temp+=pn;
                        temp-=arr[j];
                        pn = arr[j];
                    }
                }
                ans = max(ans,temp);
//                if(temp<0)
//                {
//                    temp=0;
//                    pn = INT_MIN;
//                    counter=0;
//                }
                 prev = temp;
            }
        }
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}
