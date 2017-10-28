#include <stdio.h>
#include <string.h>

int main()
{    {
    int t,no=0,i,j;
    char s[1000],c;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
      gets(s);
      int l=strlen(s);
      printf("Case %d: ",++no);
      for(i=0;i<l;i++)
      {
          int p=0;
                if(s[i]>='A'&&s[i]<='Z')
                 c=s[i];
                else if(s[i]>='0'&&s[i]<='9')
                {
                    p+=s[i]-'0';
                    i++;
                    while(s[i]>='0'&&s[i]<='9')
                    {
                        p=p*10+s[i]-'0';
                        i++;
                    }
                    i--;
                    for(j=0;j<p;j++)
                    printf("%c",c);
                }

        }
        printf("\n");
      }}

    return 0;
}
