#include <bits/stdc++.h>

using namespace std;

int main()
{
   int fp,lp;
   int n;
   int f,l,v;
   double r=9999999;
   cin>>fp>>lp;
   cin>>n;
   while(n--)
   {
       cin>>f>>l>>v;
       double t = sqrt(pow((fp-f),2)+pow((lp-l),2));
       t=t/v;
       if(t<r)r=t;
   }
 //  cout.precision(20);
   printf("%.20lf\n",r);
 //  cout<<r<<endl;
    return 0;
}
