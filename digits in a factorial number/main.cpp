#include <bits/stdc++.h>

int main()
{   int num;
    double sum = 0;

    printf("Enter a number : " );
    scanf("%d",&num);

    for(int i = 1;i<=num;i++)
    {

      sum+=log10(i);
    }
    printf("%d",(int)sum+1);

    return 0;
}
