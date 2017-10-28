#include <stdio.h>
#include <stdlib.h>

int main()
{   int sum1,sum2,n,i,j,in,temp,difference;

   while(scanf("%d",&n)==1){
        sum1 = 0;
        sum2 = 0;
        j = 1;

    for(i=1;i<=n;i++){
        scanf("%d",&in);

        if(i>=2){
            difference = temp - in;
            if(difference<0){
                difference*=-1;
            }

              sum1 += difference;
        }temp = n;

        sum2+=j++;

    }if(sum1==sum2){
            printf("Jolly\n");
        }
        else
            printf("Not jolly\n");
   }
    return 0;
}
