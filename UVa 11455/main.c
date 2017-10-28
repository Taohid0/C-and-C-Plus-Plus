#include <stdio.h>
#include <stdlib.h>

int main()
{   long int t,a,b,c,d;

   scanf("%ld",&t);

   while(t--){
    scanf("%ld%ld%ld%ld",&a,&b,&c,&d);

    if(a==b && b==c && c==d && d==c){
        printf("square\n");
    }
    else if((a==c && b==d) || (a==b && c==d) || (b==c && a==d)){
        printf("rectangle\n");
    }

    else if(a<=c+b+d && b<=a+c+d && c<=a+b+d && d<=a+b+c){
        printf("quadrangle\n");
    }
    else
        printf("banana\n");
   }
    return 0;
}
