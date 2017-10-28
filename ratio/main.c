#include <stdio.h>
#include <conio.h>

int main()
{   int a,b,c,d;
    float ratio;

    printf("enter the four integers\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if ((c-d)==0)
       {printf("ration is infinity,because c-d=0.");
       exit(0);
       }

    ratio=(float)(a+b)/(c-d);

    printf("ratio is %.2f",ratio);
    getch ();

    return 0;
}
