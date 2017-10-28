#include <stdio.h>
#include <stdlib.h>

int main()
{int roll,average,classAverage,i,t1,t2,t3,t4,t5;

    for(i=1;i<=5;i++){

    printf("enter roll : \nenter marks of 5 tests:\n");
    scanf("%d%d%d%d%d%d",&roll,&t1,&t2,&t3,&t4,&t5);

    average = (t1+t2+t3+t4+t5)/5;

    if (average>=90)
        printf("the grade is A of roll %d\n",roll);

    else if (average>=80 && average<=89)
        printf("the grade is B of roll %d",roll);

    else if (average>=70 && average<=79)
        printf("the grade is C of roll %d",roll);

    else if (average>=60 && average<=69)
         printf("the grade is d of roll %d",roll);
    else
        printf("the grade is F of roll %d",roll);

    classAverage+=average;}

     printf("class average is %d",classAverage);

    return 0;
}
