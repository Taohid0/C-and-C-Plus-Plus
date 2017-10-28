#include <bits/stdc++.h>

using namespace std;
int main()
{
 int a,d,i;
 while(scanf("%d%d",&a,&d)==2)
 {
  if(a==0 && d==0)

  {
   break;
  }
  int place[a],dt[d];
  for(i=0;i<a;i++)
   scanf("%d",&place[i]);
  for(i=0;i<d;i++)
   scanf("%d",&dt[i]);
  sort(place,place+a);
  sort(dt,dt+d);
        if(place[0]<dt[1])
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
 return 0;
}
