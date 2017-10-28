#include <iostream>

using namespace std;

void selection_sort(int arr[],int num)
{

    for(int i = 0;i<num;i++)
    {


        for(int j = i;j<num;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
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

    selection_sort(arr,num);

    for(int i = 0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
