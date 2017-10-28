#include <bits/stdc++.h>

using namespace std;

void part(int arr[],int low,int high);

void merge_sort(int arr[],int low,int mid,int high);

int main()
{int arr[100],element;

    cout << "enter the number of elements : " << endl;
    cin>>element;

    cout<<"enter the numbers : ";

    for(int i = 0;i<element;i++)
    {
        cin>>arr[i];
    }

    part(arr,0,element-1);

    for(int i = 0;i<element;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
void part(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {   mid = (high+low)/2;

        part(arr,low,mid);
        part(arr,mid+1,high);
        merge_sort(arr,low,mid,high);
    }
}
void merge_sort(int arr[],int low,int mid,int high)
{
    int i =low;
    int l = low;
    int m= mid+1;
    int temp[100];

    while(l<=mid && m<=high)
    {
        if(arr[l]>arr[m])
        {
            temp[i] = arr[m];
            m++;
        }
        else
        {
            temp[i] = arr[l];
            l++;
        }
        i++;
    }
    if(l>mid)
    {
        for(int k = m;k<=high;k++)
        {
            temp[i++] = arr[k];
        }
    }
    else
    {
        for(int k = l;k<=high;k++)
        {
            temp[i++] = arr[k];
        }
    }
    for(int k = low;k<=high;k++)
    {
        arr[k] = temp[k];
    }
}
