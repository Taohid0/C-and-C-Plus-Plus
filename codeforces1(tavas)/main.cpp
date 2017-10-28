#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,temp1,temp2;

    scanf("%d",&num);


     if(num>=0 && num<=9){
          switch(num){
    case 0 : printf("zero");
             break;
    case 1 : printf("one");break;
    case 2 : printf("two");break;
    case 3 : printf("three");break;
    case 4 : printf("four");break;
    case 5 : printf("five");break;
    case 6 : printf("six");break;
    case 7 : printf("seven");break;
    case 8 : printf("eight");break;
    case 9 : printf("nine");break;
        }
     }
    else if((num>=10 && num<21) || num==20|| num==30|| num==40|| num==50|| num==60|| num==70|| num==80|| num==90){
            switch(num){
    case 10 : printf("ten");break;
    case 11 : printf("eleven");break;
    case 12: printf("twelve");break;
    case 13: printf("thirteen");break;
    case 14: printf("fourteen");break;
    case 15: printf("fifteen");break;
    case 16: printf("sixteen");break;
    case 17 : printf("seventeen");break;
    case 18: printf("eighteen");break;
    case 19: printf("nineteen");break;
    case 20: printf("twenty");break;
    case 30 : printf("thirty");break;
    case 40 : printf("forty");break;
    case 50: printf("fifty");break;
    case 60: printf("sixty");break;
    case 70: printf("seventy");break;
    case 80: printf("eighty");break;
    case 90: printf("ninety");break;

        }}
    else{
        temp1 = num/10;
        temp2 = num%10;

        switch(temp1){
        case 2 : printf("twenty-");break;
    case 3 : printf("thirty-");break;
    case 4 : printf("forty-");break;
    case 5 : printf("fifty-");break;
    case 6 : printf("sixty-");break;
    case 7 : printf("seventy-");break;
    case 8 : printf("eighty-");break;
    case 9 : printf("ninety-");break;
        }
    switch(temp2){
    case 1 : printf("one");break;
    case 2 : printf("two");break;
    case 3 : printf("three");break;
    case 4 : printf("four");break;
    case 5 : printf("five");break;
    case 6 : printf("six");break;
    case 7 : printf("seven");break;
    case 8 : printf("eight");break;
    case 9 : printf("nine");break;
        }
    }


    return 0;
}
