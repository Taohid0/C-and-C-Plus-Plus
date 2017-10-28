#include <stdio.h>
#include <stdlib.h>

int main()
{   long int a,b,c,d,l,count,i,value;

    while(1){
        scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&l);
        count = 0;
        if(a== 0 && b==0 && c== 0 && d==0 && l==0){
            break;
        }for(i=0;i<=l;i++){
        value = a*i*i+b*i+c;
         if(value%d == 0){
            count++;
         }
    }
    printf("%ld\n",count);
    }
    return 0;
}
