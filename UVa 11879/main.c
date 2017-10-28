#include <stdio.h>
#include <string.h>

int main()
{char str[10000];
int i,sum,r,l;
    while(gets(str)){
            sum=0;
            r = 0;
        if(strcmp(str,"0")==0){
            break;
        }
        l = strlen(str);
    for(i=0;i<l;i++){
        sum=r*10+str[i]-'0';
        r=sum%17;
    }
    if(r==0){
            printf("1\n");

    }
    else
        printf("0\n");
    }
    return 0;
}
