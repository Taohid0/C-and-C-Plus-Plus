#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[105][105],m,n,sum,mx,value;

    while(cin>>m>>n)
    {
        if(!m and !n)break;

        for(int i = 0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>value;
                value=!value;
                arr[i][j]=value;
                if(i>0)arr[i][j]+=arr[i-1][j];
                if(j>0)arr[i][j]+=arr[i][j-1];
                if(i>0 and j>0)arr[i][j]-=arr[i-1][j-1];
                //if(value==0)arr[i][j]=0;
            }
        }
        //cout<<endl;
//        for(int i=0;i<m;i++)
//        {
//            for(int j = 0;j<n;j++)
//                cout<<arr[i][j]<<" ";
//            cout<<endl;
//        }
        sum=0;
        for(int i = 0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                for(int k=i;k<m;k++)
                {
                    for(int l=j;l<n;l++)
                    {
                        mx=arr[k][l];
                        if(i>0)mx-=arr[i-1][l];
                        if(j>0)mx-=arr[k][j-1];
                        if(i>0 and j>0)mx+=arr[i-1][j-1];
                        if(mx==(k-i+1)*(l-j+1))
                            sum = max(sum,mx);
                        //cout<<mx<<endl;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
