#include <stdio.h>
#include <string.h>

int main()
{   char ch[25];
    int i,sum;

    while(scanf("%s",ch)!=EOF){

            sum = 0;
        for(i=0;i<strlen(ch);i++){
        if(ch[i] == 'a'){
            sum+=1;
        }
        if(ch[i] == 'b'){
            sum+=2;
        }if(ch[i] == 'c'){
            sum+=3;
        }if(ch[i] == 'd'){
            sum+=4;
        }if(ch[i] == 'e'){
            sum+=5;
        }if(ch[i] == 'f'){
            sum+=6;
        }if(ch[i] == 'g'){
            sum+=7;
        }if(ch[i] == 'h'){
            sum+=8;
        }if(ch[i] == 'i'){
            sum+=9;
        }if(ch[i] == 'j'){
            sum+=10;
        }if(ch[i] == 'k'){
            sum+=11;
        }if(ch[i] == 'l'){
            sum+=12;
        }if(ch[i] == 'm'){
            sum+=13;
        }if(ch[i] == 'n'){
            sum+=14;
        }if(ch[i] == 'o'){
            sum+=15;
        }if(ch[i] == 'p'){
            sum+=16;
        }if(ch[i] == 'q'){
            sum+=17;
        }if(ch[i] == 'r'){
            sum+=18;
        }if(ch[i] == 's'){
            sum+=19;
        }if(ch[i] == 't'){
            sum+=20;
        }if(ch[i] == 'u'){
            sum+=21;
        }if(ch[i] == 'v'){
            sum+=22;
        }if(ch[i] == 'w'){
            sum+=23;
        }if(ch[i] == 'x'){
            sum+=24;
        }if(ch[i] == 'y'){
            sum+=25;
        }if(ch[i] == 'z'){
            sum+=26;
        }if(ch[i] == 'A'){
            sum+=27;
        }if(ch[i] == 'B'){
            sum+=28;
        }if(ch[i] == 'C'){
            sum+=29;
        }if(ch[i] == 'D'){
            sum+=30;
        }if(ch[i] == 'E'){
            sum+=31;
        }if(ch[i] == 'F'){
            sum+=32;
        }if(ch[i] == 'G'){
            sum+=33;
        }if(ch[i] == 'H'){
            sum+=34;
        }if(ch[i] == 'I'){
            sum+=35;
        }if(ch[i] == 'J'){
            sum+=36;
        }if(ch[i] == 'K'){
            sum+=37;
        }if(ch[i] == 'L'){
            sum+=38;
        }if(ch[i] == 'M'){
            sum+=39;
        }if(ch[i] == 'N'){
            sum+=40;
        }if(ch[i] == 'O'){
            sum+=41;
        }if(ch[i] == 'P'){
            sum+=42;
        }if(ch[i] == 'Q'){
            sum+=43;
        }if(ch[i] == 'R'){
            sum+=44;
        }if(ch[i] == 'S'){
            sum+=45;
        }if(ch[i] == 'T'){
            sum+=46;
        }if(ch[i] == 'U'){
            sum+=47;
        }if(ch[i] == 'V'){
            sum+=48;
        }if(ch[i] == 'W'){
            sum+=49;
        }if(ch[i] == 'X'){
            sum+=50;
        }if(ch[i] == 'Y'){
            sum+=51;
        }if(ch[i] == 'Z'){
            sum+=52;
        }}

        for(i=2;i<sum;i++){
            if (sum%i==0){
                break;
            }}

        if(i>=sum){
            printf("It is a prime word.\n");}
        else
            printf("It is not a prime word.\n");

    }
    return 0;
}
