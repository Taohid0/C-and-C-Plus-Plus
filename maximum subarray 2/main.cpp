#include <bits/stdc++.h>

using namespace std;

struct data
{
    int left,right,sum;
};

data midCrossingMax(int A[],int low,int high)
{
    data d;
    int leftsum = -9999999;
    int sum = 0;
    int mid = (low+high)/2;

    for(int i = mid;i>=0;i--)
    {
        sum+=A[i];
        if(sum>leftsum)
        {
            leftsum =  sum;
            d.left =  i;
        }
    }
    sum = 0;
    int rightSum = -99999999;
    for(int i = mid+1;i<=high;i++)
    {
        sum+=A[i];

        if(sum>rightSum)
        {
           rightSum =sum  ;
            d.right =i;
        }
    }
    d.sum = leftsum+rightSum;

    return d;
}

data maximumSubArray(int A[],int low,int high)
{
    data l,r,m,t;


    if(low==high)
    {
        t.left = low;
        t.right = high;
        t.sum = A[low];

        return t;
    }
    int mid = (low+high)/2;

    l = maximumSubArray(A,low,mid);
    r = maximumSubArray(A,mid+1,high);
    m = midCrossingMax(A,low,high);

    if(l.sum>r.sum && l.sum>m.sum)
    {
        return l;
    }
    else if(r.sum>l.sum && r.sum>m.sum)
    {
        return r;
    }
    else
        return m;
}
int main()
{
    int n,A[100];
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>A[i];
    }

    data result;

    result = maximumSubArray(A,0,n-1);

    cout<<result.left<< " "<<result.right<<" "<<result.sum;

    return 0;
}
