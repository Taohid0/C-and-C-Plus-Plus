#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int sum=0;
    int arr[1000];
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    int counter=0,temp=0;
    sort(arr,arr+n);
    for(int i = n-1;i>=0;i--)
    {
        temp+=arr[i];
        counter++;
        if(temp*2>sum)
            break;
    }
    cout<<counter<<endl;
    return 0;
}
