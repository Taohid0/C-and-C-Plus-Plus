#include <iostream>

using namespace std;

void bubble_sort(int arr[],int sz)
        {
            for(int i  = 0;i< sz-1;i++)
            {
                for(int j  = i+1;j<sz;j++)
                {
                    if(arr[j]<arr[i])
                    {
                        swap(arr[j],arr[i]);
                    }

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

    bubble_sort(myarray,n);

    for(int i = 0;i<n;i++)
    {
        cout<<myarray[i]<<" ";
    }
    return 0;
}
