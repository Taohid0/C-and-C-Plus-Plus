#include <bits/stdc++.h>

using namespace std;

bitset<10000>bs;
vector<int>vi;

void sieve()
{
    bs[0] = false;
    bs[1] = false;
    for(int i = 2;i<=100;i++)
    {
        if(!bs[i])
        for(int j = i*i;j<=10000;j+=i)
        {
            bs[j] =true;
        }
    }
    for(int i = 0;i<=10000;i++)
    {
        if(!bs[i]){vi.push_back(i);
        }
    }
}
int main()
{
    sieve();
    int len = (int)vi.size();

   int test,n;
   ios::sync_with_stdio(false);
   cin>>test; //cout<<len;
   while(test--)
   {
       cin>>n;
       n = ceil(n/2)+1;
       //cout<<n<<endl;
       for(int i = 0;i<len;i++)
       {
            if(vi[i]>=n){
            cout<<vi[i]<<endl;
            break;
            }
       }
   }
    return 0;
}
