#include<stdio.h>
#include<stdlib.h>
int main()
{
    long a;
    char b[35];
    while(gets(b))
    {
        if(b[0]=='0' && b[1]=='x')
            {
                a=strtol(b,NULL,16);
                printf("%ld\n",a);
            }
        else
        {
            a=atol(b);
            if(a<0)
                break;
            else printf("0x%X\n",a);
        }
    }
    return 0;
}
