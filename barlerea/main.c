#include <stdio.h>
#include <string.h>

int main()
{
   char *s1 = "",*s2 =  "";//this line is not correct

   char *t;
   scanf("%s%s",s1,s2);

    t = strrev(s1);
   if(strcmp(t,s2)==0)
   {
       printf("YES\n");
   }
   else
    printf("NO\n");

    return 0;
}
