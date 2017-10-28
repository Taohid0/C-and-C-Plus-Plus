#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,search,number[100],element;

    printf("enter the elements of array : ");
    scanf("%d",&element);

    printf("enter numbers : \n");

    for(i=0;i<element;i++){
    scanf("%d",&number[i]);
    }

    printf("enter the number to search : ");
    scanf("%d",&search);

    for(i=0;i<element;i++){
        if(search == number[i]){
            printf("%d is peresent at location %d",search,i+1);
            break;
        }
    }
    if (i==element){
            printf("%d is not peresent",search);}

    return 0;
}
