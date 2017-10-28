#include <stdio.h>
#include <stdlib.h>

int main()
{    long int t,i,amount,temp;
    double tax;
    scanf("%ld",&t);
    for(i=1;i<=t;i++){
        scanf("%ld",&amount);
        tax = 0.0;
        temp = amount-180000;
        if(temp<=0){
            printf("Case %ld: 0\n",i);

        }
        else{
        if(temp>=1 && temp<=300000){
                temp2 = temp-300000;
                if(temp)
            tax+=temp*.1;
            temp-=300000;
        }
        if(temp>=1 && temp<=400000){
            tax+=temp*.15;
            temp-=400000;
        }
        printf("%lf\n",tax);
        if(temp>=1 && temp<=300000){
            tax+=temp*.2;
            temp-=300000;
        }
        if(temp>=1){
            tax+=temp*.25;
        }
        if(tax<2000.0){
            tax=2000.0;
        }
        printf("Case %ld: %ld\n",i,(long int)tax);}
    }
    return 0;
}
