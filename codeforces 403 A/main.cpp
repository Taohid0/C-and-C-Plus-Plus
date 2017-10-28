#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[100005*2];
    int value,counter = 0,mx =-1;
    cin>>n;
    for(int i = 0;i<2*n;i++)
    {
        cin>>value;
        if(arr[value])
        {
            arr[value] = 0;
            if(counter>0)counter--;
        }
        else
        {
            arr[value] = 1;
            counter++;
            mx = max(mx,counter);
        }
    }
    cout<<mx<<endl;
    return 0;
}
