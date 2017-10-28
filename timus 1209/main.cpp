#include <bits/stdc++.h>

using namespace std;
int arr[100000]={0};
int main()
{

    int counter = 0;
    for(int i = 1;i<=65535;i+=counter)
    {
        if(i>65535)
        {
            break;
        }
        else
            arr[i] = 1;
        counter++;

    }
    int n,inpt;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>inpt;
        cout<<arr[inpt]<<endl;
    }
    return 0;
}
