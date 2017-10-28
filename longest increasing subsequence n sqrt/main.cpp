#include <iostream>

using namespace std;
int sequence[100],indx;

int lis(int arr[],int n)
{
         for(int i = 0;i<n;i++)
         {
             for(int j = i+1;j<n;j++)
             {
                 if(arr[j]>arr[i])
                 {
                     if(sequence[i]+1>sequence[j])
                     {
                         sequence[j] = sequence[i]+1;
                     }
                 }
             }
         }
         int ls = -1;

         for(int i = 0;i<n;i++)
         {
             if(sequence[i]>ls)
             {
                 ls = sequence[i];
                 indx= i;
             }
         }
         return ls;
}


int main()
{
    int n,arr[100];
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<100;i++)
    {
        sequence[i] = 1;
    }

    int result = lis(arr,n);

    cout<<result<<endl;

     cout<<arr[indx]<< " ";
     result--;
    for(int i = n-1;i>=0;i--)
    {
        if(sequence[i]==result && arr[indx]>arr[i] )
        {cout<<arr[i]<<" ";result--;}
    }
    return 0;
}
