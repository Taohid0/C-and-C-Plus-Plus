#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {  bool sol = false;

        cin>>a>>b>>c;

        for(int x = -100;x<=100;x++)
        {  if(sol)break;
            for(int y = -100;y<=100;y++)
            {   if(sol)break;
               for(int z = -100;z<=100;z++)
               {
                   if(x!=y && y!=z && z!=x && x+y+z==a && x*y*z==b && x*x+y*y+z*z==c)
                   {
                       printf("%d %d %d\n",x,y,z);
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
