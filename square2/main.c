#include <stdio.h>
#include <stdlib.h>

    int square (int num){
    int i,k[]={0};
    printf("numbers   cube\n");
    for(i=1;i<=num;i++)
        k[i]=i*i;
        return k;
    }
int main()
{int num;

FILE* squaree;


    printf("enter numbers ");
    scanf("%d",&num);

    square(num);

    squaree = fopen("D:/data/square.txt","w");

    fprintf(square,"%d",square);

    fclose(square);

    return 0;
}
