#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1000000], str2[1000000];
    long int i, j, lenth1, lenth2;

    while(scanf("%s %s", str1, str2)==2)
    {
        lenth1=strlen(str1);
        lenth2=strlen(str2);

        for(i=0, j=0; (i<lenth1) && (j<lenth2); j++)
        {
            if(str1[i]==str2[j]) {i++;}
        }

        if(i==lenth1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
