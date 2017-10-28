#include <stdio.h>
#include <string.h>

int main()
{   char in[10];
    int t,len;

   scanf("%d",&t);
   while(t--){
    scanf("%s",in);

    len = strlen(in);

     if(len==5){
      printf("3\n");}
    else if((in[0]=='o' && in[1]=='n')||(in[0]=='o' && in[1]=='e')||(in[1]=='n' && in[2]=='e')||(in[0]=='o' && in[2]=='e')||(in[0]=='o' && in[2]=='n')){
    printf("1\n");
    }
    else
        printf("2\n");}
    return 0;
}
