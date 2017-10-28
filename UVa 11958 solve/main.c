#include <stdio.h>

int main()
{
    int test, bn, ch, cm, ah, am, dur, i, cur_time, arr_time, min_time, spend, kase=1;
    scanf("%d",&test);

    while (test--)
    {
        min_time = 1000000;

        scanf("%d %d:%d",&bn,&ch,&cm);

        cur_time = ch*60 + cm;

        for (i=0 ; i<bn ; i++)
        {
            scanf("%d:%d %d",&ah,&am,&dur);

            arr_time = ah*60 + am;

            if (arr_time<cur_time) spend = 1440 - cur_time + arr_time + dur;
            else spend = arr_time - cur_time + dur;

            if (min_time>spend) min_time = spend;
        }

        printf("Case %d: %d\n",kase++,min_time);
    }

    return 0;
}
