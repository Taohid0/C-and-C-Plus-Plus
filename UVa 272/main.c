#include <stdio.h>
#include <string.h>

int main()
{    int i,l,count= 1;
     char str[100000];
    while(gets(str)){
          l = strlen(str);

          for(i=0;i<l;i++){
          if(str[i]=='"' && count == 1){
             printf(" ");
             count = 2;}
          else if(str[i]=='"' && count == 2){
                printf("''");
                count = 1;}
          else
            printf("%c",str[i]);}
            printf("\n");}


    return 0;
}
