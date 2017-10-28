#include <iostream>

using namespace std;

int main()
{
    long long n,arr[100005],counter =1,r =1;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])counter++;
        else
        {
            r = max(r,counter);
            counter =1;
        }
    }
    r= max(r,counter);
    cout<<r;
    return 0;
}
