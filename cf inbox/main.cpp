#include <bits/stdc++.h>

using namespace std;
int arr[1000000];

int main()
{
    int value,ans=0,n;
    bool isOne=false;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>value;
        arr[i]= value;

        if(i==0 and value==1)
        {
            ans+=1;
        }
        else if(value==1 and arr[i-1]==0 and isOne)
        {
            ans+=2;
        }
        else if(value==1 and arr[i-1]==0)
        {
            ans+=1;
        }
        else if (value==1 and arr[i-1]==1)
        {
            ans+=1;
        }
         if (value==1)
        {
            isOne=true;
        }

    }
    cout<<ans<<endl;
    return 0;
}
