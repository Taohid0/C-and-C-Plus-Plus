#include <stdio.h>
#include <stdlib.h>

int main()
{   char str1[200],str2[200];
    int num1[200],num2[200],sum[205],i,j,k,carry;

    while(1){printf("Enter two numbers\n");
    scanf("%s%s",str1,str2);

    for(i=0;str1[i]!='\0';i++){
        num1[i] = str1[i] - '0';
    }
    for(j=0;str2[j]!='\0';j++){
        num2[j] = str2[j] - '0';
    }
    k=0;
    carry=0;
    i-=1;
    j-=1;
    for(;i>=0 && j>=0;i--,j--,k++){
        sum[k] = (num1[i]+num2[j]+carry)%10;
        carry = (num1[i]+num2[j]+carry)/10;
    }
    if(i>j){
        while(i>=0){
            sum[k++] = (num1[i]+carry)%10;
            carry = (num1[i--]+carry)/10;
        }
    }
    else if(j>i){
        while(j>=0){
            sum[k++] = (num2[j]+carry)%10;
            carry = (num1[j--]+carry)/10;
        }
    }
    if(carry>0){
        sum[k++]=carry;
    }
    for(i=k-1;i>=0;i--){
        printf("%d",sum[i]);
    }
    printf("\n");}
    return 0;
}
