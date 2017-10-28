#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,row,column,m,n;
    cin>>t;char c;int counter=1;
    while(t--)
    {
        int arr[26];
        memset(arr,0,sizeof(arr));
        cin>>row>>column>>m>>n;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>c;
                arr[c-'A']++;
            }
        }
        sort(arr,arr+26);
        int sum=arr[25];
        for(int i=24;i>=0;i--)
        {
            if(arr[25]!=arr[i])break;
            sum+=arr[i];
        }
        long long result=sum*m+(row*column-sum)*n;
        cout<<"Case "<<counter++<<": "<<result<<endl;
    }
    return 0;
}
