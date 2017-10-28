#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[],int element)
{
    int j;

    for(int i = 1;i<element;i++)
    {
        int value = arr[i];
        j = i-1;

        while(arr[j]>value && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = value;
    }
}

int  binary_search(int arr[],int element,int srch)
{
    int begin,mid,end;
    begin = 0;
    end = element - 1;
    int index = -1;

    while(begin<=end)
    {
        mid = (begin+end)/2;
        if(arr[mid]==srch)
        {
            index = mid;
            break;
        }
        else if(arr[mid]<srch)
        {
            begin = mid+1;
        }
        else if(arr[mid]>srch)
        {
            end = mid-1;
        }

    }
        return index;
}
int main()
{   int element,arr[100];

    cout << "enter the number of elements : " << endl;
    cin>>element;

    cout<<"enter the numbers : ";

    for(int i =0;i<element;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,element);

    for(int i = 0;i<element;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"enter which number do you want to search : ";
    int srch;
    cin>>srch;

    int result = binary_search(arr,element,srch);

    if(result==-1)
    {
        cout<<srch<<" is not present here ";
    }
    else
        cout<<"position is "<<result+1;

    return 0;
}
