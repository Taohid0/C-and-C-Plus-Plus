#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,a,b,c;
    cin>>t;
    while(t--)
    {  bool sol = false;

        cin>>a>>b>>c;

        for(long long x = -2449489743;x<=2449489743;x++)
        {  if(sol)break;
           if(x*x<=c)
            for(long long y = -6000000000000000000;y<=6000000000000000000;y++)
            {   if(sol)break;
             if(x*x+y*y<=c)
               for(long long z = -6000000000000000000;z<=6000000000000000000;z++)
               {
                   if(x!=y && y!=z && z!=x && x+y+z==a && x*y*z==b && x*x+y*y+z*z==c)
                   {
                       printf("%lld %lld %lld\n",x,y,z);
                       sol =true;
                       break;
                   }
               }
            }
        }
        if(!sol)
        {
            cout<<"No solution.\n";
        }
    }
    return 0;
}
