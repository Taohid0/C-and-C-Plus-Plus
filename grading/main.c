#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{   int marks;

      printf("give your marks.\n");
      scanf("%d",&marks);

    while ((marks >=80) && (marks<=100))
        printf("your grade is A+");
        break;

   while ((marks>=70) && (marks<80))
        printf("your grade is A");
        break;

  while ((marks>=60) && (marks<70))
        printf("your grade is A-");
        break;

   while ((marks>=50) && (marks<60))
        printf("your grade is B");
        break;

   while ((marks>=40) && (marks<50))
        printf("your grade is C");
        break;

   while((marks>=33) && (marks<50))
        printf("your grade is D");
        break;

  while ((marks>=0) && (marks<33))
        printf("your grade is F");
        break;

        getch();

    return 0;
}
