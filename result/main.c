#include <stdio.h>
#include <stdlib.h>

int main()
{   int score;

    printf("Enter your score\n");
    scanf("%d",&score);

    if (score>=90 && score<=100)
        printf("your grade is A");

    else if (score>=80 && score<90)
        printf("your grade is B");

    else if (score>=70 && score<80)
        printf("your grade is C");

    else if (score>=60 && score<70)
        printf("your grade is D");

    else
        printf("your grade is F");

    return 0;
}
