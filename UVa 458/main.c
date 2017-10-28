#include <stdio.h>
#include <string.h>

int main()
{   char word[1000];
    int l,i;

    while(gets(word)){
    l = strlen(word);
    for(i=0;i<l;i++){
        printf("%c",word[i]-7);
    }
    printf("\n");}
    return 0;
}
