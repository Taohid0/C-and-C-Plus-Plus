#include <bits/stdc++.h>

using namespace std;

const int inf = 100000000;
int  n,numbers[100],I[100],L[100];

int LIS(){
   // I[0] = -inf;

    for(int i = 0;i<=n;i++)
    {
        I[i] = inf;
    }
    int result = 0;

    for(int i = 0;i<n;i++)
    {
        int low,mid,high;
        low = 0;
        high= result;

        while(low<=high)
        {
            mid = (low+high)/2;
            if(I[mid]<numbers[i])
            {
                low = mid+1;
            }
            else
                high = mid-1;
        }
        I[low] = numbers[i];
        if(result<low)
        {
            result = low;
        }
    }
    return result;
    }

int main()
{
   cout<<"how many numbers do you want to enter ?";
   cin>>n;

   for(int i =0;i<n;i++)
   {
       cin>>numbers[i];
   }
   int result = LIS();

   cout<<result;
    return 0;
}
