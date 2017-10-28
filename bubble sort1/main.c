#include <stdio.h>
#include <stdlib.h>

int main()
{   int num[] = {3,6,5,4,7,8,4,52},i,j,temp;

    for(i = 0;i<8;i++){

        for(j = 0;j<8;j++){
            if(num[j]>num[j+1]){
                temp = num[j];
                num[j]  = num[j+1];
                num[j+1] = temp;
            }
        }

    }
    for(i =0;i<8;i++){
    printf("%d\n",num[i]);}
    return 0;
}
