#include <bits/stdc++.h>

using namespace std;

int main()
{int n,num,m,o;
    scanf("%d",&num);
 int res,fres = 0;
    while(num--){
    res = 0;
        scanf("%d%d%d",&m,&n,&o);
        if(m==1)res++;
        if(n==1)res++;
        if(o==1)res++;
       if(res>=2){
          fres++;}
    } printf("%d\n",fres);
    return 0;
}
