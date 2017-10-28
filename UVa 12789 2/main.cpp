#include <bits/stdc++.h>
int main()
{   long int player,match,temp,i,j,goal,result,res;
    while(scanf("%ld%ld",&player,&match)==2)
    {
        res = 0;
        temp = match;
        for(i=1;i<=player;i++)
            {
            result = temp;
            for(j=1;j<=match;j++)
            {
                scanf("%ld",&goal);
            if(goal>0)
            {
                result--;
            }
            }
            if(result==0)
            {
                res++;
            }

        }
        if(res>0)
        {
            printf("%ld\n",res);
        }
        else
            printf("0\n");

    }
    return 0;
}
