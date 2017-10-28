#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100010];
    int carry,n,m,x;

    while(cin>>n)
    {
        memset(arr,0,sizeof(arr));
        m =1;
        arr[0] =1;
        carry = 0;
        for(int i = 2;i<=n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                x = arr[j]*i+carry;
                arr[j] = x%10;
                carry= x/10;
            }
            while(carry)
            {
                arr[m] = carry%10;
                carry/=10;
                m++;
            }
        }
        for(int i =0;i<m;i++)
        {
            if(arr[i])
               {

              printf("%5d -> %d\n",n,arr[i]);
                break;  }
        }
    }
    return 0;
}
