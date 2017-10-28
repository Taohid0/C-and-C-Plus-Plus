#include <bits/stdc++.h>

using namespace std;

long int a1,a2,b1,b2;
long int g(long int n);
long int f(long int n)
{
    if(n==0)return a1;
    else if(n==1)return b1;
    else return f(n-1)+g(n-2);
}
long int g(long int n)
{
    if(n==0)return a2;
    else if(n==1)return b2;
    else return g(n-1)+f(n-2);
}

int main()
{ios_base::sync_with_stdio(0) ;

  long int test,n;
  cin>>test;
  for(int i=1;i<=test;i++)
  {
      long int mx=-1000000;

          cin>>a1>>b1>>a1>>b2;



      long int t1,t2,t3,t4;
          t1=abs(f(a1)-g(a1));
          t2=abs(f(a2)-g(a2));
          t3=abs(f(b1)-g(b1));
          t4=abs(f(b2)-f(b2));
          t1=max(t1,t2);
          t3=max(t3,t4);
          t1=max(t1,t3);
          cout<<"Case "<<i<<": "<<t1<<endl;
  }
    return 0;
}
