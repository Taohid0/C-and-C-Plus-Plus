#include <iostream>

using namespace std;

int partition(int s[],int l,int h)
{
    int p,firsthigh;

    p = h;
    firsthigh = l;

    for(int i = l;i<h;i++)
    {
        if(s[i]<s[p])
        {
            swap(s[i],s[firsthigh]);
            firsthigh++;
        }

    }
    swap(s[firsthigh],s[p]);
    return (firsthigh);
}

void quicksort(int s[],int l,int h)
{
        int p;

        if(h>l){
            p = partition(s,l,h);
            quicksort(s,l,p-1);
            quicksort(s,p+1,h);
        }
}

int main()
{
    int n,arr[100];

    cout<<"how many numbers do you want to enter ?";
    cin>>n;

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);

    for(int i  = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
