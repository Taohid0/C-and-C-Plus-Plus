#include <stdio.h>
#include <string.h>

int main()
{   int i =0;
    char s[50],a[10]= "Hajj",b[10] = "Umrah" ,c[2] = "*";

    while(1){
        gets(s);
        i++;
        if(strcmp(s,c)==0){
            break;
        }
        if(strcmp(s,a) == 0){
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        if(strcmp(s,b) == 0){
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
    }
    return 0;
}
