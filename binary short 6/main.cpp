#include <stdio.h>
#define MAX 50

int main()
{   int n,number[MAX],i,j,temp;

    printf("how many numbers do you want to sort?" );
    scanf("%d",&n);

    printf("enter your numbers : ");

    for(i = 0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }

    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
        {
            if(number[j]>number[j+1])
            {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d  ",number[i]);
    }
    return 0;
}
