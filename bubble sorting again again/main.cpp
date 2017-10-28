#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[],int element)
{
    for(int i = 0;i<element;i++)
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
{    int num,arr[100];

    cout << "how many number do you want to store ? " << endl;
    cin>>num;

    cout<<"enter the numbers : ";

    for(int i = 0;i<num;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,num);

    for(int i = 0;i<num;i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}
