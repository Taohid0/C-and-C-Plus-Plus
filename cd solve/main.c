#include <stdio.h>
int ar[10000000];
int main()
{
    int i, a, b, counter, s, temp;
    while (scanf("%d %d",&a,&b)==2)
    {
        if (!a && !b) return 0;
        counter=0;

        for (i=0 ; i<a ; i++)
        {
            scanf("%d",&ar[i]);
        }

        for (i=0, s=0 ; i<b ; i++)
        {
            scanf("%d",&temp);
            for ( ; temp>=ar[s] && s<a ; s++)
            {
                if (ar[s] == temp)
                {
                    counter++;
                    break;
                }
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}
