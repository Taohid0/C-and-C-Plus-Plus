#include <stdio.h>
#include <stdlib.h>

int main()
{int student,subject,roll,total=0,i,j,marks;

    printf("enter number of students a subjects\n");
    scanf("%d%d",&student,&subject);

    for(i=1;i<=student;i++){
            printf("enter roll number\n");
            scanf("%d",&roll);
            printf("enter marks of %d subjects for roll %d\n",subject,roll);

            for(j=1;j<=subject;j++){
                scanf("%d",&marks);
                total+=marks;}


          printf("total marks is %d\n",total);

          if(total>=360)
            printf("first division\n");

          else if (total>=240)
                 printf("second division\n");
          else
              printf("fail\n");}

    return 0;
}
