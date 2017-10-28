#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   int arr[800],x,carry;
   int frequency[10];
   while(cin>>n)
   {
       if(!n)break;
       memset(arr,0,sizeof(arr));
       memset(frequency,0,sizeof(frequency));
       arr[0] = 1;
       int m =1;
       carry= 0;
       for(int i= 2;i<=n;i++)
       {
           for(int j = 0;j<m;j++)
           {
               x = arr[j]*i+carry;
               arr[j] = x%10;
               carry =x/10;
           }
           while(carry>0)
           {
               arr[m]= carry%10;
               carry/=10;
               m++;
           }
       }
       for(int i= 0;i<m;i++)
       {
           frequency[arr[i]]++;
       }
       cout<<n<<"! --"<<endl;
       cout<<"   ";
       for(int i = 0;i<=9;i++)
        {
            cout<<"("<<i<<")"<<"    "<<frequency[i];
            if(i!=9)cout<<"    ";
            if(i==4)
            {cout<<endl;cout<<"   ";
            }
        }
        cout<<endl;

   }
    return 0;
}
