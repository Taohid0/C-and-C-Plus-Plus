#include <stdio.h>
#include <stdlib.h>

int gcd (int n1,int n2){
        int a,b,temp;
        a = n1;
        b = n2;

        while(a!=0){
            temp = a;
            a = b%a;
            b = temp;}
        return b;
}

int main()
{   int num1,num2;

    scanf("%d%d",&num1,&num2);

    printf("%d\n",gcd(num1,num2));
    return 0;
}
