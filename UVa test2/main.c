#include <stdio.h>
#include <stdlib.h>

int main()
{char ch;
int i,p;
scanf("%d",&p);
    for(i=1;i<=p;i++){fflush(stdin);
    while(scanf("%c",&ch)!='\n'){



    printf("%c",ch);  if(ch=='\n')break; }}
    return 0;
}
