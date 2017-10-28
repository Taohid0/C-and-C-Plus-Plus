#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   double num,sum,avg,cr;
    int i,t,j,c;

    scanf("%d",&t);
    for(i=1;i<=t;i++){
            sum = 0.0;
        for(j=1;j<=12;j++){
            scanf("%lf",&num);
            sum+=num;
        }
        avg = sum/12.0;
        if(avg<999.99){
        printf("%d $%.2lf\n",i,avg);}
        else{
            c = (int)avg/1000;
            cr = fmod(avg,1000.00);
            printf("%d $%d,%.2lf\n",i,c,cr);
                  }}
    return 0;
}
