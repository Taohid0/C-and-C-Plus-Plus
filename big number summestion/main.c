#include <stdio.h>
#include <stdlib.h>

int main()
{   char str1[200],str2[200];
    int carry,num1[200],num2[200],result[205],i,k,j;

    printf("enter two numbers\n");
    scanf("%s%s",str1,str2);

    for(i = 0;str1[i]!='\0';i++){
        num1[i] = str1[i] - '0';
    }
    for(j = 0;str2[j]!='\0';j++){
        num2[j] = str2[j] - '0';
    }
    k = 0;
    i-=1;
    j-=1;
    carry = 0;

    for(;i>=0 && j>=0;i--,j--,k++){
          result[k] = (num1[i] + num2[j] + carry)%10;
          carry = (num1[i] + num2[j] + carry)/10;

    }

    if(i>j){
        while(i>=0){
            result[k] = (num1[i] + carry)%10;
            carry = (num1[i--] + carry)/10;
            k++;
        }
    }
    else if(j>i){
        while(j>=0){
            result[k] = (num2[j] + carry)%10;
            carry = (num1[j--] + carry)/10;
            k++;
        }
    }
    while (carry>0){
        result[k++] = carry%10;
        carry= carry/10;
    }
    printf("the summestion is ");
    for(i = k-1;i>=0;i--){
        printf("%d",result[i]);
    }


    return 0;
}
