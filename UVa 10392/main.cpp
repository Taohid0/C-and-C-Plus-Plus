#include <bits/stdc++.h>

using namespace std;

bitset<1100010>primeTest;
vector<int>primeList;

void sieve()
{
        for(int i = 2;i<=1000;i++)
        {
            if(!primeTest[i])
            {
                for(int j = i*i;j<=1010005;j+=i)
                    primeTest[j] = true;
            }
        }
        for(int i= 2;i<=1010000;i++)
        {
            if(primeTest[i]==0)
            primeList.push_back(i);
        }
}

int main()
{
    sieve();
   long long n;
   int len=(int)primeList.size();

   while(cin>>n)
   {

       if(n<0)break;


            for(int i=0;i<len;i++)
            {

                    if(n<primeList[i])break;
                while(n%primeList[i]==0)
                {
                    cout<<"    "<<primeList[i]<<endl;
                    n /=primeList[i];

                }


                if(n==1)break;
            }
            if(n!=1)cout<<"    "<<n<<endl;
            cout<<endl;

   }
    return 0;
}
