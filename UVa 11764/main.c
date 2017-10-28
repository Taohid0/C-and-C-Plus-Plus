#include <stdio.h>
#include <stdlib.h>

int main()
{   long int test,i,j,jump[1000],temp,wall,high_jump,low_jump;

    scanf("%ld",&test);
    for(i=0;i<test;i++){
            high_jump = 0;
            low_jump = 0;

        scanf("%ld",&wall);
        for(j=0;j<wall;j++){
            scanf("%ld",&jump[j]);

            if(j==0){
                temp = jump[j];

            }
            else{
                if(jump[j]>temp){
                    temp = jump[j];
                    high_jump++;
                }
                if(jump[j]<temp){
                    temp = jump[j];
                    low_jump++;
                }
            }
        }
        printf("Case %ld: %ld %ld\n",i+1,high_jump,low_jump);
    }
    return 0;
}
