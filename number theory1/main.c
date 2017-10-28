#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{int count=0,result=1,m,n;


    printf("enter base\n");
    scanf("%d",&n);

    printf("enter power\n");
    scanf("%d",&m);

    while(count!=m){
        result*=n;
        count++;
    }
    printf("%d",result);

    getch();

    return 0;
}
