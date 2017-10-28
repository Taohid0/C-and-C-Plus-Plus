#include <stdio.h>
#include <stdlib.h>

int main()
{     int n=216;
      int sum = 0,i,i2;
      int sum1 = 0;

      for(i=1;i<=n;i++){
           i2 = i;
      while(i!=0){sum += i % 10;
                  i = i/10;
                }

            sum1 = sum +i2;
            printf("%d\n",sum1);
            if(sum1 == n);
               break;
            }

        if (sum1 == i)
           printf("%d",i2);

        return 0;
}
