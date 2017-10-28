#include<stdio.h>
#include <stdlib.h>
int main()
{
    char sign,res[1000];
    int a,b,r,ca=0;

    while((scanf("%d%c%d=%s",&a,&sign,&b,res)==4))
    {

        switch(sign)
        {
        case '+':
            r=a+b;
            break;
        case '-':
            r=a-b;
            break;
        }
        if(r==atoi(res))ca++;
    }
    printf("%d\n",ca);
    return 0;
}
