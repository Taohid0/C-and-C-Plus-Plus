#include <stdio.h>
#include <stdlib.h>

int main()
{  long int sum,a,b;

   while((scanf("%ld%ld",&a,&b))!=EOF && b>1){
            sum = a;
            while(a>=b){

                sum+=a/b;

                a = (a/b) + (a%b);
            }
            printf("%ld\n",sum);
   }
    return 0;
}
