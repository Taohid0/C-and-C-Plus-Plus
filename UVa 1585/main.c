#include <stdio.h>
#include <string.h>

int main()
{   char s[100];
    int i,l,m,t,sum;

    scanf("%d",&t);
    while(t--){

        getchar();
        gets(s);
        l = strlen(s);
            m=0;
            sum = 0;
        for(i=0;i<l;i++){
            if(s[i]== 'O'){
                m++;sum+=m;
            }



            if(s[i] == 'X'){
                m = 0;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
