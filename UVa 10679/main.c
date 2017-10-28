#include <stdio.h>
#include <string.h>

int main()
{char s[100005],temp[100005];
int i,j,count,l,t,t2;
    scanf("%d\n",&t);

    while(t--){
        gets(s);

        scanf("%d\n",&t2);
        for(i=1;i<=t2;i++){
            gets(temp);
            l = strlen(temp);
             count = 0;
                for(j=0;j<l;j++){
                    if(s[j]==temp[j]){
                            count++;} }

                if(count==l){
                    printf("y\n");
                }
                else
                    printf("n\n");

        }
    }

    return 0;
}
