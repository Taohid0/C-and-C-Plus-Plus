#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int arr[100]={8,1,9,8,3,4,6,1,5,2,},n=10;
    vector<int>l;
    vector<int>result;

    l.assign(100,1);

    //cin>>n;

   // for(int i= 0;i<n;i++)
  //  {
   //     cin>>arr[i];
  //  }
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                if(l[j]<=l[i])
                {
                    l[j] = l[i]+1;
                }
            }
        }
    }
    int maximum = l[0];
    int maxIndex=0;

    for(int i = 1;i<n;i++)
    {
       if(l[i]>maximum)
       {
           maximum =l[i];
           maxIndex = i;
       }
    }
    result.push_back(arr[maxIndex]);

    for(int i = n-1;i>=0;i--)
    {
        if(l[i]==l[maxIndex] -1 && arr[i]<arr[maxIndex])
        {
            result.push_back(arr[i]);
            maxIndex = i;
        }
    }
    for(auto i = result.rbegin();i!=result.rend();i++)
    {
        cout<<*i<< " ";
    }

    return 0;
}
