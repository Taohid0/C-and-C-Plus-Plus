#include <stdio.h>
#include <stdlib.h>

int digit (int n){
   int sum3 = 0;
        while(n!=0){
            sum3 = n%10;
            n/=10;
        }
        return sum3;}

int main()
{   int num[4],sum1,sum2,sum,i,j,test;

    scanf("%d",&test);

    for(i=1;i<=test;i++){
            sum1 = 0;
            sum2 = 0;
            sum = 0;

        for(j=0;j<4;j++){
                scanf("%d",&num[j]);

    }
    for(j=0;j<4;j+=2){
            while(num[j!=0]){
        sum1 = digit((num[j]%10)*2);
        num[j]/=10;
    }}
    for(j=1;j<4;j+=2){
        sum2 += num[j];
        num[j]/=10;
    }
    sum = sum1+sum2;

    if(sum%10 == 0){
        printf("Valid\n");
    }
    else
        printf("Invalid\n");}
    return 0;
}
