#include <iostream>

using namespace std;


int rod_cutting(int arr[],int n)
{
    int r[100];
    r[0] = 0;

    for(int i = 1;i<=n;i++)
    {
        int q = -11111;

        for(int j = 1;j<=i;j++)
        {
            q = max(q,arr[j]+r[i-j]);
        }
        r[i] = q;
    }
    return r[n];
}

int main()
{
    int n,arr[100];

    cin>>n;

    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }

    int result = rod_cutting(arr,n);

    cout<<result<<endl;

    return 0;
}
