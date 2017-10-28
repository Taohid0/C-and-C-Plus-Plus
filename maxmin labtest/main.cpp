#include <iostream>

using namespace std;
struct data
{
    int maxi,mini;
};
int arr[100];

data maxMin(int i,int j,data a)
{
           if(i==j)
           {
               a.maxi = arr[i];
               a.mini = arr[i];
               return a;
           }
           if(i==j-1)
           {
               if(arr[i]>arr[j])
               {
                   a.maxi= arr[i];
                   a.mini = arr[j];
               }
               else
               {
                   a.maxi = arr[j];
                   a.mini = arr[i];
               }
               return a;
           }
           else
           {
               data b;
               int mid = (i+j)/2;

               a  = maxMin(i,mid,a);
               b = maxMin(mid+1,j,b);

               if(a.maxi<b.maxi)
               {
                   a.maxi = b.maxi;
               }
               if(a.mini>b.mini)
               {
                   a.mini = b.mini;
               }
               return a;
           }
}

int main()
{
    int n;
    cin>>n;

    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }
    data result;

    result = maxMin(1,n,result);
    cout<<"maximum = "<<result.maxi<<endl;
    cout<<"minimum = "<<result.mini<<endl;
    return 0;
}
