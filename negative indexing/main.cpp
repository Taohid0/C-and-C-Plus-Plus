#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++)
    {

        arr[-i]=arr[i];

    }
    for(int i=0;i<10;i++)
    {

        cout<<arr[-i];
    }
    return 0;
}
