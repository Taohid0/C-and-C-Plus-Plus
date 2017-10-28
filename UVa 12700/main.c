#include <stdio.h>


int main()
{   char result[150];
    int i,j,match,a,t,w,b,d,td;

    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&match);
        getchar();
        gets(result);
        a=0,w=0,b=0,d=0,td=0;
        for(j=0;j<match;j++){

            if(result[j]=='T'){
                td++;
            }
            if(result[j]=='B'){
                b++;
            }
            if(result[j]=='W'){
                w++;
            }
            if(result[j]=='A'){
                a++;
            }
            if(result[j]=='D'){
                d++;
            }}
            if (match==a){
                printf("Case %d: ABANDONED \n",i);
            }
            else if(match-a==b){
                printf("Case %d: BANGLAWASH \n",i);
            }
            else if (match-a==w){
                printf("Case %d: WHITEWASH \n",i);
            }

            else if(b>w){
                printf("Case %d: BANGLADESH %d - %d \n",i,(match-td-a-w-d),w);
            }
            else if(w>b){
                printf("Case %d: WWW %d - %d \n",i,(match-a-b-td-d),b);
            }
            else if(b==w){
                printf("Case %d: DRAW %d %d \n",i,b,w);
            }
        }


    return 0;
}
