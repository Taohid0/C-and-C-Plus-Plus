#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10001];

    int n,indx = 1;
    cin>>n;
    cout<<n<<endl;
    arr[indx++] = n;
    while(scanf("%d",&n)==1)
    {     arr[indx] = n;
        sort(arr+1,arr+indx+1);

        if(indx%2==1)
        {
            cout<<arr[(indx/2)+1]<<endl;
        }
        else
            cout<<(arr[indx/2]+arr[indx/2+1])/2<<endl;
        indx++;

    }
    return 0;
}
