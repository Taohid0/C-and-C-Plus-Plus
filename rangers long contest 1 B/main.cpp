#include <bits/stdc++.h>

using namespace std;


int main()
{
    int v,day,arr[3005],value,n,remaining =0,temp;
    memset(arr,0,sizeof(arr));

    cin>>n>>v;
    for(int i = 0;i<n;i++)
    {
        cin>>day>>value;
        arr[day]+=value;
    }
    int r = 0;
    for(int i =1;i<=3001;i++)
    {

        if(remaining+arr[i]<=v)
        {
            r+=remaining+arr[i];
            remaining= 0;
        }
        else
        {
          r+=v;
          if(v<=remaining)
            remaining = arr[i];
          else
          {
              remaining= arr[i]+remaining-v;
          }

    }}

  cout<<r;

    return 0;
}
