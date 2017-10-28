#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {8,1,9,8,3,4,6,1,5,2},l[100],low,mid,high;

    vector<int>I;
    I.assign(100,9999999);
    I[0] = -9999999;
    int lisLength=0;

    for(int i = 0;i<10;i++)
    {
        low = 0;
        high = lisLength;

        while(low<=high)
        {
            mid = (low+high)/2;

            if(I[mid]<arr[i])
                low = mid+1;

            else
                high = mid-1;
        }
        I[low] = arr[i];
        l[i] = low;

        if(low>lisLength)
        {
            lisLength =low;
        }
    }
    cout<<lisLength<<endl;

    for(int i = 0;i<10;i++)
    {
        cout<<l[i]<< " ";
    }

    return 0;
}
