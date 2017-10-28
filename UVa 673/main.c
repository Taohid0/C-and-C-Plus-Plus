#include <stdio.h>
#include <string.h>

int main()
{   char str[200];
    int i,t,a,b,c,l,d;

    scanf("%d\n",&t);
    while(t--){
            a=b=c=d=0;

        gets(str);
        l = strlen(str);
        for(i=0;i<l;i++){
            if(str[i]=='('){
                a++;
               }
            if(str[i]==')'){
                b++;
            }
            if(str[i]=='['){
                c++;
            }
            if(str[i]==']'){
                d++;
            }
        }
        if(a==b && c==d){
        printf("Yes\n");}
        else
            printf("No\n");
    }
    return 0;
}
