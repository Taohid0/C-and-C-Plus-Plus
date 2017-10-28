#include <stdio.h>
#include <stdlib.h>

int main()
{   long int goal[105][105],result,i,j,player,match;

    while(scanf("%ld%ld",&player,&match)==2){

            result = 0;

            for(i=0;i<player;i++){
                for(j=0;j<match;j++){
                    scanf("%ld",&goal[i][j]);
                }
            }
            for(j=0;j<player;j++){
            for(i=0;i<match;i++){

                if(goal[j][i]==0){
                    break;
                }}
                if(i==match){
                    result++;
                }

            }
            printf("%ld\n",result);
    }
    return 0;
}
