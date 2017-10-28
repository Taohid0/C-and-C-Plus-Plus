#include <stdio.h>
#include <stdlib.h>

int main()
{   int marks,grade;

    printf("enter your marks\n");
    scanf("%d",&marks);

    grade = marks/10;

    switch(grade){
           case 10 :
           case  9 : printf("your grade is A+");
                     break;

           case  8 : printf("your grade is A");
                     break;

           case  7 : printf("your grade is A-");
                     break;

           case  6 : printf("your grade is B");
                     break;

           case  5 : printf("your grade is C");
                     break;

           case  4 : printf("your grade is D");
                     break;

           case  3 :
           case  2 :
           case  1 :
           case  0 : printf("your grade is F");
                     break;

            default:
                   printf("you have entered an invalid mark");}

    return 0;
}
