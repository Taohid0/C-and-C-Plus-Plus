#include <stdio.h>
#include <math.h>

#define PI 2*acos(0.0)

int main()
{   int t;
    double l,r,r_a,w,g_a;

    scanf("%d",&t);
    while(t--){
        scanf("%lf",&l);
        w= (6*l)/10;
        r = (l/5);
        r_a = PI*r*r;
        g_a = (l*w) - r_a;

        printf("%.2lf %.2lf\n",r_a,g_a);
    }
    return 0;
}
