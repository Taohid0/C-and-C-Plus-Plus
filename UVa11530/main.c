#include <stdio.h>
#include <string.h>

int main()
{   int count,i,test,j;
    char ch[250];

    scanf("%d",&test);
    getchar();

    for(i=1;i<=test;i++){
            count  = 0;
            gets(ch);
     for(j=0;j<strlen(ch);j++){
              if(ch[j] == '\n')
                   break;


            if (ch[j]=='a' || ch[j]=='d'|| ch[j]=='g'|| ch[j]=='j'|| ch[j]=='m'||ch[j]=='p' || ch[j]=='t'|| ch[j]=='w'|| ch[j]==' ')
               count++;
            if (ch[j]=='b' || ch[j]=='e'|| ch[j]=='h'|| ch[j]=='k'|| ch[j]=='n'||ch[j]=='q' || ch[j]=='u'|| ch[j]=='x')
                count+=2;
            if (ch[j]=='c' || ch[j]=='f'|| ch[j]=='i'|| ch[j]=='l'|| ch[j]=='o'||ch[j]=='r' || ch[j]=='v'|| ch[j]=='y')
                count+=3;
            if (ch[j]=='s' || ch[j]=='z')
                count+=4;
        }
        printf("Case #%d: %d\n",i,count);

    }

    return 0;
}
