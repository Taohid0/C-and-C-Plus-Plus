#include <stdio.h>
#include <math.h>

int main()
{   double a,u,v,t,s;
    int i=0,n;

    while(1){
          i++;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(n==1){
            scanf("%lf%lf%lf",&u,&v,&t);
            a = (v-u)/t;
            s = u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
    if(n==2){
        scanf("%lf%lf%lf",&u,&v,&a);
        t = (v-u)/a;
        s = u*t+.5*a*t*t;
        printf("Case %d: %.3lf %.3lf\n",i,s,t);
    }
    if(n==3){
        scanf("%lf%lf%lf",&u,&a,&s);
        t=(sqrt(u*u+2.0*s*a)-u)/a;
        v=u+a*t;
        printf("Case %d: %.3lf %.3lf\n",i,v,t);
    }
     if(n==4){
        scanf("%lf%lf%lf",&v,&a,&s);
        u = sqrt(v*v-2*a*s);
        t = (v-u)/a;
        printf("Case %d: %.3lf %.3lf\n",i,u,t);
     }

        }
    return 0;
}
