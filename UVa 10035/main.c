#include <stdio.h>
#include <stdlib.h>

int main()
{long int i,a,b,c;

  while(1){
    scanf("%ld%ld",&a,&b);
        i = c= 0;
        if(a == 0 && b == 0){
            break;
        }
     while(a!=0 || b !=0 ) {

        c = (a%10 + b%10 +c)/10;

        a/=10;
        b/=10;
        i = i+c;
}


    if(i==0){
        printf("No carry operation.\n");
    }
    if(i==1){
        printf("1 carry operation.\n");
    }
    if(i>1){
        printf("%ld carry operations.\n",i);
    }}
    return 0;
}
