#include <iostream>

using namespace std;

int sequence[100];

int lis(int arr[],int n)
{
      int lisLength= 0;

       int low,high,mid;


    for(int i = 0;i<n;i++)
    {
        low = 0;
        high = lisLength;


        while(low<=high){
            mid = (low+high)/2;

            if(sequence[mid]>arr[i])
                high = mid-1;

            else
                low = mid+1;
        }
        sequence[low] = arr[i];

        if(lisLength<low)
        {
            lisLength = low;
        }


    }
    return lisLength;
}

int main()
{
    sequence[0] = -9999999;

    for(int i = 1;i<100;i++)
    {
        sequence[i] = 9999999;
    }

    int n,arr[100];
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int r =lis(arr,n);

    cout<<r;
    return 0;
}
