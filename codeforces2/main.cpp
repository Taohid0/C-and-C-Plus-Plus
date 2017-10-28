#include <bits/stdc++.h>

using namespace std;

int digit(long num){
       int digit = 0;
       while(num){
        num /=10;
        digit++;
    } return digit;
         }
int lucky_digit(long num){
              int temp,digit = 0;
        while(num){
        temp = num%10;num /=10;
        if(temp==7 || temp ==4){

        digit++;
    }}
    return digit;}
int main()
{
    long num,result = 0;
    scanf("%ld",&num);


    for(int i = 4;i<=num;){
        if(digit(i)==lucky_digit(i)){
            result++;
        }
        if((i%2)==0)
        {i+=7;}
        else
            i+=4;
    }
    printf("%ld",result);

    return 0;
}
