#include <bits/stdc++.h>

using namespace std;

int main()
{
    long year;
    int b ,leap;

    while(scanf("%ld",&year)==1){
            b=0,leap = 0;  printf("\n");
        if(year%400==0){
            printf("This is leap year.\n");
            b=1;
        }
        else if(year%4==0 && year %100 !=0){
            printf("This is leap year.\n");
            b=1;
            leap = 1;
        }
        if(year%15==0){
            printf("This is huluculu festival year.\n");
            b=1;
        }
    if(year%55==0 && leap==1){
        printf("This is buluculu festival year.\n");
        b=1;
    }
    if(b==0){
        printf("This is an ordinary year.\n");
    }

    }
    return 0;
}
