#include <iostream>

using namespace std;

int rod_cutting(int arr[],int n,int r[])
{
    int q;
    if(r[n]>=0)return r[n];

    if(n==0)return 0;

    else
    {
        q = -999999;

        for(int J = 1;J<=n;J++)
        {
            q =max(q,arr[J]+rod_cutting(arr,n-J,r));
        }
        r[n] =q;
        return q;
    }

}

int main()
{   int r[100];

    for(int i = 0;i<=99;i++)
    {
        r[i] = -999999;
    }
    int n,arr[100];

    cin>>n;

    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }

    int result = rod_cutting(arr,n,r);

    cout<<result<<endl;
    return 0;
}
