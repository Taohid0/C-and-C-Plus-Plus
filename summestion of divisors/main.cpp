#include <bits/stdc++.h>

using namespace std;

int main()
{
    int temp,n;
    int t,cnt;
    int result = 1;
    cin>>n;

     temp = n;

    for(int i = 2;i*i<=n;i++)
    {  cnt = 1;
        while(temp%i==0)
        {
            temp/=i;
            cnt++;

        }

            t =((pow(i,cnt))-1)/(i-1);
        cout<<t<< " ";
        result*=t;

    }
    cout<<result;
    return 0;
}
