#include <iostream>

using namespace std;

int quicksort(int a[],int low,int high)
{
    int firsthigh,p;


    firsthigh =low;
    p = high;

    for(int i = low;i<=high;i++)
    {
        if(a[i]<a[p])
        {
            swap(a[firsthigh],a[i]);
            firsthigh++;
        }
    }
    swap(a[firsthigh],a[p]);

    return firsthigh;

}

void part(int a[],int low,int high)
{
    if(low<high)
    {
        int l = quicksort(a,low,high);
        part(a,low,l-1);
        part(a,l+1,high);
    }
}

int main()
{
    int n,a[100];
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    part(a,0,n-1);

    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
