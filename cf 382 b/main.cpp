#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,n1,n2;
   vector<int>v;
   cin>>n>>n1>>n2;
   int inpt;
   for(int i=0;i<n;i++)
   {
       cin>>inpt;
       v.push_back(inpt);
   }
   sort(v.begin(),v.end());
   long long sum1=0,sum2=0;int counter = 0;
   int lg,bg;
   if(n1<n2){lg =n1;
   bg =n2;}
   else
   {
       lg = n2;
       bg =n1;
   }
   for(int i = n-1;i>=0;i--)
   {
       if(counter<lg){sum1+=v[i];}
       else
        sum2+=v[i];counter++;
        if(counter==n1+n2)break;
   }
   double result =(double)sum1/lg+(double)sum2/bg;
   printf("%.8lf\n",result);
    return 0;
}
