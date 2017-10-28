#include <stdio.h>
#include <string.h>

int main()
{    char word[1000];
     int count,i,l,w;

    while(gets(word)){
            count = 0;
            w=1;
        l = strlen(word);
        for(i=0;i<l;i++){
            if(((word[i]>=65 && word[i]<=90) || (word[i]>=97 && word[i]<=122))){
                if(w)
                count++;
                w = 0;
            }
            else
                w = 1;
        }
        printf("%d\n",count);
    }
    return 0;
}
