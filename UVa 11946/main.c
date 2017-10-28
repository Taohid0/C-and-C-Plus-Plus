#include<stdio.h>
#include<string.h>
int main()
{
    char s[80000],l;
    int i,t;
    scanf("%d\n",&t);
    while(t--){

       while(gets(s)!='\0'){

        l=strlen(s);
        for(i=0;i<l;i++)
        {
        if(s[i]=='0')
        printf("O");
        else if(s[i]=='1')
        printf("I");
        else if(s[i]=='2')
        printf("Z");
        else if(s[i]=='3')
        printf("E");
        else if(s[i]=='4')
        printf("A");
        else if(s[i]=='5')
        printf("S");
        else if(s[i]=='6')
        printf("G");
        else if(s[i]=='7')
        printf("T");
        else if(s[i]=='8')
            printf("B");
        else if (s[i]=='9')
            printf("P");
        else
            printf("%c",s[i]);

        }
        printf("\n");
        }}

return 0;
}
