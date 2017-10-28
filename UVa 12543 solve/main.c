#include <stdio.h>
#include <string.h>

 int main()
{
    char s[1000005],a[1000005];
        int max=1,i,l,l1,j;
    while(1){
        gets(s);
        if(!strcmp(s,"E-N-D"))
        break;
        l=strlen(s);
        int c=0;
        for(i=0;i<l;i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='-')
            continue;
            else
            c++;
        }
        l=l-c;
        if(max<l){
            max=l;
            strcpy(a,s);
        }

     l1=strlen(a);
    for( j=0;j<l1;j++)
    {
    if(a[j]>='A'&&a[j]<='Z')
    printf("%c",a[j]+32);
    else if((a[j]>='a'&&a[j]<='z')||a[j]=='-')
    printf("%c",a[j]);
    }
    printf("\n");}
    return 0;
}
