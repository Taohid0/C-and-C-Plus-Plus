#include <bits/stdc++.h>

using namespace std;

int searchValue,arr[]={1,2,3,4,5,6,7,8,9,0};

int BinSearch(int low,int high)
{
    if(low==high)
    {
        if(searchValue==arr[low])return low;
        else return -1;
    }
    else {
        int mid =(low+high)/2;
        if(arr[mid]==searchValue)return mid;
        if(arr[mid]<searchValue)
        {
            return BinSearch(mid+1,high);
        }
        else
            return BinSearch(low,mid-1);
    }
}

int main()
{

    while(1)
    {
        cin>>searchValue;
       cout<<BinSearch(0,9)<<endl;
    }
    return 0;
}
