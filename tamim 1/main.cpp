#include <stdio.h>

int main()
{
    int p,q,n,i,test,t,j,k,s,total,a[40];

    scanf("%d",&test);

    for(i=1; i<=test; i++)
    {
        s=0;
        total=0;
        scanf("%d%d%d",&n,&p,&q);
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        for(k=n-2; k>=0; k--)
        {
            for(j=0; j<=i; j++)
                if(a[j]>a[j+1]) //ei line ta ektu kheyal koro
                {
                    t=a[j];
                    a[j]=a[j+1]; //etao,j ta item er jonno j+1 asbe kivabe?
                    a[j+1]=t;
                }
        }
        for(j=0;j<n;j++)
        {
            s=s+a[j];
            if((s<=q) && (total<p))
            {
                total++;
            }
        }
        printf("Case %d: %d\n",i,total);
    }
    return 0;
}
