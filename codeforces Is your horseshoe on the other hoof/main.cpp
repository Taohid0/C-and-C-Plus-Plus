#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long arr[10000];
     for(int i = 0;i<4;i++)
        cin>>arr[i];
     sort(arr,arr+4);
     int counter = 0;
     for(int i = 1;i<4;i++)
     {
         if(arr[i]==arr[i-1])counter++;
     }
     cout<<counter<<endl;
    return 0;
}
