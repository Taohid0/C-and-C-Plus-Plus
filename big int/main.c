#include <stdio.h>
#include <stdlib.h>

int main()
{   char str1[1000],str2[1000];
    int num1[1000],num2[1000],sum[1000],i,r,j,m,k,l,carry;

    while(1){
    scanf("%s%s",str1,str2);
    for(i=0;str1[i]!='\0';i++){
        num1[i]=str1[i] - '0';
    }
    for(j=0;str2[j]!='\0';j++){
        num2[j] =str2[j]- '0';
    }
    carry= 0;
    m = 0;
    i-=1;
    j-=1;

    for(k=i,l=j;k>=0 && l>=0;k--,l--,m++)
    {
        sum[m] = (num1[k]+num2[l]+carry)%10;
        carry = (num1[k]+num2[l]+carry)/10;
    }
    if(i>j)
    {while(k>=0){
        sum[m++] =  (num1[k]+carry)%10;
        carry = (num1[k--]+carry)/10;
    }}
    if(j>i)
    {
        while(l>=0)
        {
            sum[m++]=(num2[l]+carry)%10;
            carry = (num2[l--]+carry)/10;
        }
    }
    if(carry>0){
        sum[m++] = carry;
    }
    for(r = m-1;r>=0;r--)
    {
        printf("%d",sum[r]);
    }
    printf("\n");
    }
    return 0;
}
