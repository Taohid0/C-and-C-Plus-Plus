#include <stdio.h>
#include <stdlib.h>

int main()
{   int score,grade;

    printf("enter your score\n");
    scanf("%d",&score);

    grade=score/10;

    switch (grade)
    {
        case 10:
        case 9 : printf("your grade is A");
                 break;

        case 8 : printf("your grade is B");
                 break;

        case 7 : printf("your grade is C");
                 break;

        case 6 : printf("your grade is D");
                 break;

        default: printf("your Grade is f");
                  break;
    }
    return 0;
}
