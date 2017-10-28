#include <iostream>

using namespace std;

void insertion_sort(int arr[],int num)
{
    for(int i = 1;i<num;i++)
    {    int j = i;
        int temp =arr[i];
        j--;

        while(temp<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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
    insertion_sort(arr,num);

    for(int i = 0;i<num;i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}
