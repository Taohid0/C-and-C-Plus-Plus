#include <iostream>

using namespace std;

void selection_sort(int arr[],int sz)
{
       int min;
       for(int i = 0;i<sz;i++)
       {   min = i;

           for(int j = i+1;j<sz;j++)
           {
               if(arr[min]>arr[j])
               {
                   min= j;
               }
           }
           swap(arr[i],arr[min]);


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

    selection_sort(myarray,n);

    for(int i = 0;i<n;i++)
    {
        cout<<myarray[i]<<" ";
    }
    return 0;
}
