#include <stdio.h>
#include <stdlib.h>

int main()
{   long int t,a,b,c;
   scanf("%ld",&t);

   while(t--){
    scanf("%ld%ld%ld",&a,&b,&c);

  if(a>=b+c || b>=a+c || c>=a+b){
        printf("Wrong!!\n");
    }
    else
        printf("OK\n");
   }
    return 0;
}
