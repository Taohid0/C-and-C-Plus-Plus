#include <iostream>

using namespace std;

void merge_sort(int arr[],int low,int mid,int high)
{
    int temp[100],i,r,l;
    i = low;
    l = low;
    r = mid+1;

    i = 0;
    while(l<=mid && r<=high)
    {
        if(arr[l]<=arr[r])
        {
            temp[i] = arr[l];
            l++;
        }
        else
        {
            temp[i] = arr[r];
            r++;
        }
        i++;
    }
    if(l>mid)
    {
        for(int k = r;k<=high;k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }



else{
    for(int k =l;k<=mid;k++ )
    {
        temp[i++] = arr[k];
    }
    }

    for(int i = low;i<=high;i++)
    {
        arr[i]  = temp[i];
    }
}

void part(int arr[],int low,int high)
{
    int mid;
    if(low<high){
        mid = (low+high)/2;

        part(arr,low,mid);
        part(arr,mid+1,high);

        merge_sort(arr,low,mid,high);
    }
}

int main()
{    int num,arr[100];

    cout << "how many number do you want to store ? " << endl;
    cin>>num;

    cout<<"enter the numbers : ";

    for(int i = 0;i<num;i++)
    {
        cin>>arr[i];
    }

    part(arr,0,num-1);

    for(int i = 0;i<num;i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}
