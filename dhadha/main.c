#include <stdio.h>
#include <string.h>

int main()
{   int i,l;
    char word[100000];

   while(1){
        printf("Enter your word : ");
   gets(word);
   l = strlen(word);

   for(i=0;i<l;i++){
    if(word[i]>=65 && word[i]<=88){
            word[i]  +=2;
   }
   else if(word[i]=='Y'){
    word[i] = 'A';
   }
    else if(word[i]=='Z'){
        word[i] = 'B';
    }
    else if(word[i]>=97 && word[i]<=120){
        word[i]+=2;
    }
    else if(word[i]=='y'){
       word[i] = 'a';}
    else if(word[i]=='z'){
        word[i] = 'b';
       }

    }for(i=0;i<l;i++){
        printf("%c",word[i]);
       }
        printf("\n\n\n");
        }
    return 0;
}
