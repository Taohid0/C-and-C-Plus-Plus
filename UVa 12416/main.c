#include <stdio.h>
#include <string.h>

int main()
{   char word[1000000];
    int i,l,count,space;

    while(gets(word)){
        l = strlen(word);
        count = 0;
        for(i=0;i<l-1;i++){
            if(word[i]==' ' && word[i+1]==' '){
                count++;
            }
            space = count/2;
        }
        printf("%d\n",space);
    }

 return 0;
}
