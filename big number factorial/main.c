#include <stdio.h>
#include <stdlib.h>

int main()
{int fact[200],i,j,m,temp,number,num;

    while(1){printf("Enter a number : ");
    scanf("%d",&num);

    temp = 0;
    m = 1;
    fact[0] = 1;

    for(i=1;i<=num;i++){
        for(j=0;j<m;j++){
            number =fact[j]*i+temp;
            fact[j] = number%10;
            temp = number/10;
        }
        while(temp>0){
            fact[m] = temp%10;
            temp/=10;
            m++;
        }
    }
    for(i=m-1;i>=0;i--){
        printf("%d",fact[i]);
    }
    printf("\n");}
    return 0;
}
