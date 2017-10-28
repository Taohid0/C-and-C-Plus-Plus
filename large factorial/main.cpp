#include <bits/stdc++.h>


int main()
{   int m,result[500],temp,i,j,num,x;

    printf("enter a number : ");
    scanf("%d",&num);

    result[0] = 1;
    temp= 0;
    m = 1;

    for(i = 1;i<=num;i++){

        for(j = 0;j<m;j++){
            x = result[j]*i+temp;
            result[j] = x%10;
            temp =  x/10;
        }
        while(temp>0){
            result[m] = temp%10;
            temp = temp/10;
            m++;
        }
    }
    printf("the result is ");

    for(i = m-1;i>=0;i--){
        printf("%d",result[i]);
    }

    return 0;
}
