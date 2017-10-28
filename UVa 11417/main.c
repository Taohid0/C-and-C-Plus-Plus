#include <stdio.h>
#include <stdlib.h>

int gcd (long int n1,long int n2){
    long int a,b,c;
    a=n1;
    b=n2;

    while(a!=0){
        c=a;
        a=b%a;
        b = c;
    }
    return b;
}
int main()
{   long int num,i,j,g;
    while(1){
        scanf("%ld",&num);
        if(num==0){
            break;
        }
        g=0;

       for(i=1;i<num;i++){

      for(j=i+1;j<=num;j++) {

        g+=gcd(i,j);}}



    printf("%ld\n",g);}

    return 0;
}
