#include <stdio.h>
#include <string.h>

int main()
{   char sentence[15];
    int l,k,i;

    while(1){printf("Enter a word : ");
    scanf("%s",sentence);

    l = strlen(sentence);
    k=l-1;
    for(i=0;i<l;i++){
        if(sentence[i]!=sentence[k]){
            break;
        }
        k--; }
      if(i==l){
        printf("palindrome\n");
      }
      else
        printf("not palindrome\n");}
    return 0;
}
