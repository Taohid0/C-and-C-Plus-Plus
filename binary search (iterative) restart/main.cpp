#include <bits/stdc++.h>

using namespace std;
int arr[]={1,2,3,4,5,6,7,8,9},searchValue;

    int low=0,high=9;
int binSearch(int low,int high)
{

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==searchValue)return mid;

        else if(arr[mid]<searchValue)
        {
            low=mid+1;
        }
        else high=mid-1;
    }
    return -1;
}

int main()
{


    while(1)
    {
        cin>>searchValue;
        cout<<binSearch(0,9)<<endl;
    }
    return 0;
}
