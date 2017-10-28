#include <stdio.h>
#include <stdlib.h>

int main()
{long int t,i,j,bus,current_hour,current_min,hour,min,present,arrival_time,total_time,result,arrival;

    scanf("%ld",&t);
    for(i=1;i<=t;i++){
        scanf("%ld%ld%ld",&bus,&current_hour,&current_min);

              if(current_hour==0){
                current_hour+=24;
            }
            present=current_hour*60+current_min;
          for(j=1;j<=bus;j++){
            scanf("%ld%ld%ld",&hour,&min,&arrival_time);
            min = 999999;

            if(hour==0){
                hour+=24;
            }
            arrival = hour*60+min;
            total_time = arrival-present+arrival_time;
            if(total_time<=min){
                result = total_time;
            }
        }
        printf("Case %ld: %ld\n",i,result);
        printf("%ld",arrival);
    }
    return 0;
}
