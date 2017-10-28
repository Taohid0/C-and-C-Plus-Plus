#include <bits/stdc++.h>

using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int arr[10];
    for(int i = 0;i<10;i++)
    {
        arr[i] = i;
    }

    sort(arr,arr+10,cmp);
    for(auto i:arr)
        cout<<i<<endl;
    return 0;
}
