#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long n,t1,t2,n1,n2;
    cin>>n;
    while(n--)
    {
        cin>>n1>>n2;

        t1=0,t2=0;
        for(int i=1;i<=n1;i++)
        {
            t1=t1*10+9;
        }
        //
        //cout<<t1<<endl;
        t2=t1-(t1/10);
        int counter=0;
        cout<<t1<<"   "<<t2;
        //for(long long i=t2;i<=t1;i++)
       // {
      //      if(i%n2==0)counter++;
      //  }
        cout<<t2/n2<<endl;
    }
    return 0;
}
