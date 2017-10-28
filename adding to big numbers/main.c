#include <stdio.h>
#include <stdlib.h>

int main()
{   char s1[200],s2[200];
    int num1[200],num2[200],sum[200],carry,k,i,j,l;

  while(1){  printf("enter two numbers\n");
    scanf("%s%s",s1,s2);

    for(i=0;s1[i]!='\0';i++){
        num1[i] = s1[i]-'0';
    }
    for(j=0;s2[j]!='\0';j++){
        num2[j] = s2[j]-'0';
    }
    k = 0;

    carry = 0;
    i-=1;
    j-=1;
    for(;i>=0 && j>=0;i--,j--,k++){
        sum[k] =(num1[i]+num2[j]+carry)%10;
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
            carry = (num2[j--]+carry)/10;}}

    if(carry>0){
        sum[k++] = carry;
    }

    for(l=k-1;l>=0;l--){
        printf("%d",sum[l]);
    }
    printf("\n");}

    return 0;
}
