#include <stdio.h>
#include <string.h>
int words[100];
int main()
{
    int k,flag,w,len,hyp;
    char ch;

    flag=0;
    w=0;
    len=0;
    hyp=0;
    while(scanf("%c",&ch)==1){
         if(ch=='-')hyp=1;
        if(  (ch>='a'&&ch<='z') ||(ch>='A'&&ch<='Z') ){

            flag=1;
            len++;
            hyp=0;
        }
        if(flag==1&&(ch=='.'||ch==' ' ||ch=='?' ||ch=='!'||ch==','||ch=='\n') ){

           if(hyp==1&&ch=='\n'){}
           else {
           words[len]++;
           len=0;
          w++;
          flag=0;
           }
        }
        if(ch=='#'){

         flag=0;
         len=0;
         for(k=0;k<100;k++){
            if(words[k]!=0){
             printf("%d %d\n",k,words[k]);

            }
            words[k]=0;

         };
         w=0;
        printf("\n");

        }
    }
   return 0;
}
//net ,easy
