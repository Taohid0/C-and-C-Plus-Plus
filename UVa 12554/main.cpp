#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char s[100][100];
    char c[16][100]={"Happy","birthday","to","you","Happy","birthday",
    "to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    scanf("%d",&n);

        int k=0,p=1;
        for(int i=0;i<n;i++)
        scanf("%s",s[i]);

        if(n>16)
         p=ceil(n/16)+1;

       int t = p*16;
        for(int j=0,i=0;j<t;j++,i++,k++)
        {
            if(i==n)
            i=0;
            if(j==16)
            k=0;
            printf("%s: %s\n",s[i],c[k]);


    }
    return 0;
}
