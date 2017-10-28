#include <stdio.h>
#include <string.h>

int main()
{   char word[1000];
    int l,i,j,b;

    while(gets(word)){
            b=0;

        l = strlen(word);
        for(i=0;i<l;i++){
            if(word[i]==' '){
                for(j=i-1;j>=b;j--){
                    printf("%c",word[j]);

                }b = i+1;
                printf(" ");
            }
        }
        for(j=i-1;j>=b;j--){
            printf("%c",word[j]);
        }
        printf("\n");
    }
    return 0;
}
