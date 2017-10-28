#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a = 1234567,b=123456,c=1234;
    long long n;

    bool flag = true;
    cin>>n;


      for(int i = 0;i<=811;i++)
      {

        for(int j = 0;j<=8101;j++)
        {


               if(a*i+b*j>n)
               {
                   break;
               }
            int temp = n-i*a-j*b;
            if(temp%c==0)
            {
                cout<<"YES"<<endl;
                flag = true;
                return 0;
            }
        }

      }
      if(flag)cout<<"NO"<<endl;

    return 0;
}
