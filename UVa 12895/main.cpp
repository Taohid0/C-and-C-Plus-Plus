#include <bits/stdc++.h>

long digits (long n){
            int result = 0;
            while(n){
                n = n/10;
                result++;
            }
            return result;
            }
int main()
{   long coun,i,num,digit,temp,result,wait;

    scanf("%ld",&coun);

    while(coun--){
            scanf("%ld",&num);
    wait=num;

    digit = digits(num);
    result= 0;

    for(i = 1;i<=digit;i++){
        temp = num%10;
        num = num/10;

        result += powl(temp,digit);
    }
    if(result==wait){
        printf("Armstrong\n");
    }

    else
        printf("Not Armstrong\n");


    }

    return 0;
}
