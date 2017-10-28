#include <stdio.h>
#include <stdlib.h>
void birth(int x,int y,int z){
        printf("my birth date is %d %d %d",x,y,z);
        }

int main()
{   struct birth_date{
        int date;
        int month;
        int year;
        };
    struct birth_date b1;

    printf("enter day,month and year\n");
    scanf("%d%d%d",&b1.date,&b1.month,&b1.year);

    birth(b1.date,b1.month,b1.year);

    return 0;
}
