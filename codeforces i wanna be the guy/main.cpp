#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1000],n,a,value;
    cin>>n;
    memset(arr,0,sizeof(arr));

    cin>>a;
    while(a--)
    {
        cin>>value;
        arr[value] = 1;
    }
    cin>>a;
    while(a--)
    {
        cin>>value;
        arr[value]=1;
    }
    bool flag =true;
    for(int i =1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            flag = false;
            break;
        }
    }
    if(flag)cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
