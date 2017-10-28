#include <iostream>

using namespace std;

int arr[100];

void merge_sort(int arr[],int low,int mid,int high)
{
    int l,i,r;

    l = low;
    i = low;
    r = mid+1;
    int temp[100];

    while(l<=mid && r<=high)
    {
        if(arr[l]<arr[r])
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
        for(int k = r;k<=high;k++){
            temp[i++] = arr[k];
        }
    }
    else
        for(int k = l;k<=mid;k++)
    {
        temp[i++] = arr[k];
    }
    for(int i= low;i<=high;i++)
    {
        arr[i] = temp[i];
    }
}
void part(int arr[],int low,int high)
{
    int mid;
    if(low<high){
        mid  = (low+high)/2;
        part(arr,low,mid);
        part(arr,mid+1,high);
        merge_sort(arr,low,mid,high);
    }
}

int main()
{  int n;

    cout << "how many numbers do you want to enter ? " << endl;
    cin>>n;

    cout<<"enter the numbers : ";

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    part(arr,0,n-1);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
