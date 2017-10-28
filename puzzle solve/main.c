#include <stdio.h>
#include <string.h>

int main()
{   int i,l;
    char word[100000];

   while(1){
        printf("Enter your code : ");
   gets(word);
   l = strlen(word);

   for(i=0;i<l;i++){
    if(word[i]>=67 && word[i]<=90){
            word[i]  -=2;
   }
   else if(word[i]=='A'){
    word[i] = 'Y';
   }
    else if(word[i]=='B'){
        word[i] = 'Z';
    }
    else if(word[i]>=99 && word[i]<=122){
        word[i]-=2;
    }
    else if(word[i]=='a'){
       word[i] = 'y';}
    else if(word[i]=='b'){
        word[i] = 'z';
       }

    }printf("The solution of this code is : ");
    for(i=0;i<l;i++){
        printf("%c",word[i]);
       }
        printf("\n\n\n");
        }
    return 0;
}
