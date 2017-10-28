#include <stdio.h>
#include <stdlib.h>

int length (int n){
        int count = 0;
        while(n!=0){
            n/=10;
            count++;
        }
        return count;}

int sum (int nm){
         int sum = 0;
         while(nm!=0){sum += nm % 10;
             nm = nm/10;
             }

         return sum;
}

int generator (int n){
      int i;
      int sum1 = 0;
      int o = n- (length(n)*9);
      for(i=o;i<=n;i++){

          sum1 =  i + sum(i) ;

            if(sum1 == n)
               break;
            }

        if (sum1 == n)
              return i;
        else
            return 0;
        }

int main()
{   int num,round,i;

    scanf("%d",&round);
    for(i=1;i<=round;i++){

        scanf("%d",&num);


        printf("%d\n",generator(num));
    }
    return 0;
}
