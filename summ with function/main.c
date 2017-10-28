#include <stdio.h>
#include <stdlib.h>

    int adding(int num){
    int i,sum=0;

        for(i=1;i<=num;i++){
        sum+=i;}

        return sum;
        }


int main()
{   int num,ok;

    FILE* sum2;

    printf("enter number\n");
    scanf("%d",&num);

    ok = adding(num);
    sum2 = fopen("D:/data/sum2.txt","w");

    fprintf(sum2,"the sum of first %d numbers is %d",num,ok);

    fclose(sum2);

    return 0;

}
