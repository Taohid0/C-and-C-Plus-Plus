#include <stdio.h>
#include <stdlib.h>

int main()
{   int i=0,j;
    char ch,digit[30];

    while(scanf("%c",&ch)!=EOF){
               if(ch == 'A' || ch == 'B' || ch == 'C'){
                digit[i]='2';
               }
                if(ch == 'D' || ch == 'E' || ch == 'F'){
                digit[i]='3';
               }
                if(ch == 'G' || ch == 'H' || ch == 'I'){
                digit[i]='4';
               }
                if(ch == 'J' || ch == 'K' || ch == 'L'){
                digit[i]='5';
               }
                if(ch == 'M' || ch == 'N' || ch == 'O'){
                digit[i]='6';
               }
                if(ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S'){
                digit[i]='7';
               }
                if(ch == 'T' || ch == 'U' || ch == 'V'){
                digit[i]='8';
               }
                if(ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z'){
                digit[i]='9';
               }
                if(ch == '-'){
                digit[i]='-';
               }
               if(ch == '1'){
                digit[i] = '1';
               }
               if(ch == '0'){
                digit[i] = '0';
               }
               i++;
    }for(j=0;j<i;j++){
        printf("%c",digit[j]);}

    return 0;
}
