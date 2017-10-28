#include <iostream>

using namespace std;

void count_sorting(int arr[],int element)
{
    for(int i = 0;i<element;i++)
    {
        int index = i;

        for(int j = index+1;j<element;j++)
        {
            if(arr[index]>arr[j])
            {
                swap(arr[index],arr[j]);
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
    count_sorting(arr,element);

    for(int i = 0;i<element;i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}
