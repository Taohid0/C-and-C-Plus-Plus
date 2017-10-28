#include <stdio.h>
#include <math.h>

int main()
{   int u,v,d;
    int i,c;
    scanf("%d",&c);
    for(i=0;i<c;i++){
        scanf("%d %d %d",&d,&v,&u);
        if(u==0 ||v==0 ||u<=v)
            printf("Case %d: can't determine\n",i+1);
        else{
            double st=0,pt=0;
            st=d*1.0/u;
            pt=d*1.0/sqrt(u*u-v*v);
            printf("Case %d: %.3f\n",i+1,pt-st);
        }
    }
       return 0;
    }
