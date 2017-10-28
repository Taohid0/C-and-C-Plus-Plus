#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{long int sum,i,temp,l;
    char num[100];
    while(1){
            scanf("%s",num);
            sum = 0;
            l =strlen(num);
       for(i=0;i<l;i++){
        temp =num[i]- '0';
        sum+= temp*(pow(2,l-i)-1);
       }
      id(sum==0){
      break;}

        printf("%ld\n",sum);
    }
    return 0;
}
