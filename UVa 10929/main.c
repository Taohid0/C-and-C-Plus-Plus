#include <stdio.h>
#include <string.h>

int main()
{   char digit[1010];
    int i,l,c;

    while(1){
        scanf("%s",digit);
        if(strcmp(digit,"0")==0){
            break;
        }
        c = 0;
        l=strlen(digit);

        for(i=0;i<l;i++){
            c = (c*10+ (digit[i]-48)) % 11;

        }
        if(c==0){
            printf("%s is a multiple of 11.\n",digit);
        }
        else
            printf("%s is not a multiple of 11.\n",digit);
    }
    return 0;
}
