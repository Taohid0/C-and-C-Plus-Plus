#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,sum;


    while(scanf("%d",&n)!= EOF){
            sum = n;

           while(n>3){
            sum+=(n/3);

            n = (n/3)+(n%3);
            if((n+1) == 3){
                sum +=1;}
            }
         printf("%d\n",sum);

        }

    return 0;
}
