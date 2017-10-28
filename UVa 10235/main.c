#include <stdio.h>
#include <stdlib.h>

int main()
{  long int i,j,num,rev,o;

    while(scanf("%ld",&num)!=EOF){
           o = num;
             for(i=2;i*i<=num;i++){
                   if(num%i==0){
                    printf("%ld is not prime.\n",o);
                    break;
                }
                 else {
                    rev = 0;
                    while(num!=0){
                        rev = rev*10+num%10;
                        num/=10;
                    }

               for(j=2;j*j<=rev;j++){
                    if(rev%j==0){
                        printf("%ld is prime.\n",o);
                        break;
                    }}
                 if(j*j>rev){
                    printf("%ld is emirp.\n",o);
                    break;
                }}}
            }
    return 0;
}
