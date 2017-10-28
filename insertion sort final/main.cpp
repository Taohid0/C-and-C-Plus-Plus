#include <iostream>

using namespace std;

void insertion_sort(int arr[],int sz)
{
            for(int i = 1;i<sz;i++)
            {
                int  j = i;

                while(j>0 && arr[j]<arr[j-1])
                {
                    swap(arr[j],arr[j-1]);
                    j--;
                }
            }
}


int main()
{
    int n,myarray[100];

    cout<<"how many numbers do you want to enter ?";
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>myarray[i];
    }

    insertion_sort(myarray,n);

    for(int i = 0;i<n;i++)
    {
        cout<<myarray[i]<<" ";
    }
    return 0;
}
