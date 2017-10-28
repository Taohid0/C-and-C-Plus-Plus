#include <stdio.h>
#include <stdlib.h>

int main()
{int eachCopyPrice,numberOfSoldCopy;

    printf("enter the net price of each copy of the novel\nand the estimated number of copies that will be sold\n");
    scanf("%d%d",&eachCopyPrice,&numberOfSoldCopy);

    printf("you will get total $25000 in the first option.\n");
    printf("you will get total $%.2f in the second option.\n",(float)eachCopyPrice*numberOfSoldCopy*.125);
    if(numberOfSoldCopy<=4000)
       printf("you will get total $%.2f in the third option.\n",(float)eachCopyPrice*numberOfSoldCopy*.1);
    else
        printf("you will get total $%.2f in the third option",((float)eachCopyPrice*numberOfSoldCopy*.14)-(
                                                                (float)eachCopyPrice*4000*.14)+((float)eachCopyPrice*4000*.1));
    return 0;
}
