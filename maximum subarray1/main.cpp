#include <bits/stdc++.h>

using namespace std;

struct data
{
    int maxLeft,maxRight,totalSum;
};


data maxCrossingSubarray(int a[],int low,int high)
{

    int sum = 0;
    int mid = (low+high)/2;

    data d;
    int leftSum = -99999999;

    for(int i = mid;i>=low;i--)
    {
        sum +=a[i];
        if(sum>leftSum)
        {
           leftSum =sum;
            d.maxLeft = i;

        }

    }
    int rightSum = -99999999;
    sum = 0;

    for(int i = mid+1;i<=high;i++)
    {
        sum+=a[i];
        if(sum>rightSum)
        {
            rightSum = sum;
            d.maxRight = i;
        }
    }
    d.totalSum = leftSum+rightSum;
    return d;
}

data maximumSubArray(int a[],int high,int low)
{
    data d;
    if(high==low)
    {
        d.maxLeft = low;
        d.maxRight = high;
        d.totalSum = a[low];
        return d;
    }
    else
    {
        int  mid = (low +high)/2;
        data l1 = maximumSubArray(a,low,mid);
        data r1 =maximumSubArray(a,mid+1,high);
        data m1 = maxCrossingSubarray(a,low,high);

        if(l1.totalSum>=r1.totalSum && l1.totalSum>=m1.totalSum)
        {
            return l1;
        }
        else if(r1.totalSum>=l1.totalSum&& r1.totalSum>=m1.totalSum)
        {
            return r1;
        }
        else return m1;
    }
}


int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    data result = maximumSubArray(a,0,n-1);
    cout<<result.totalSum;

    return 0;
}
