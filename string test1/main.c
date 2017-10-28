#include <stdio.h>
#include <stdlib.h>

int main()
{   char tst[100];
    int count = 0,i;

    printf("enter characters\n");
    for(i=0;i!='\n';i++){
        tst[i] = getchar();
    }
    for(i=0;i!='\0';i++){
        if(tst[i] == 'a' ||tst[i] == 'e' || tst[i] =='i' || tst[i] =='o' || tst[i] =='u')
            count++;
    }
    printf("%d",count);

    return 0;
}
