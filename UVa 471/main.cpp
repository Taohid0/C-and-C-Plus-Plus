#include <bits/stdc++.h>

using namespace std;

bool isRepeated(long long n)
{
    int arr[11]={0};
    int t;
    while(n)
    {
        t = n%10;
        n/=10;

          if(arr[t])
            return false;
        arr[t]++;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    int test;
    long long n;
    long long temp;
    cin>>test;
    while(test--)
    {
        cin>>n;

            for(int i = 1;;i++)
            {
                if( isRepeated(i)){
                temp =i*n;

                if(temp>9876543210LL)
                    break;


                   if(isRepeated(temp))
                 {
                      cout<<temp<<" / "<<i<< " = "<<n<<endl;
                   }
                }

        }
       if(test) cout<<endl;
    }
    return 0;
}
