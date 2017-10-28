#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[],int element)
{
    for(int i = 0;i<element-1;i++)
    {
        for(int j = 0;j<element;j++)
        {
            if(arr[j]>arr[j+1])
               {
                   swap(arr[j],arr[j+1]);
               }
        }
    }
}

int main()
{int arr[100],element;

    cout << "enter the number of elements : " << endl;
    cin>>element;

    cout<<"enter the elements : ";

    for(int i = 0;i<element;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,element);

    for(int i = 0;i<element;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
