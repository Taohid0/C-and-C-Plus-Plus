#include <stdio.h>
#include <string.h>

int main()
{   char s[100],temp[20],replace[20],enter[20];
    int i;

    printf("Enter a sentence : ");
    gets(s);

    printf("which word do you want to replace? \n");
    scanf("%s",replace);

    printf("which word do you want to enter? \n");
    scanf("%s",enter);

    for(i=0;i<=strlen(s);i++){
        if(s[i]!=' ' ){
            temp[i]= s[i];}
            if(strcmp(temp,replace)==1){
                strcpy(temp,replace);
                s[i] = temp[i];
            }}

    for(i=0;i<=strlen(s);i++){
        printf("%c",s[i]);
    }

    return 0;
}
