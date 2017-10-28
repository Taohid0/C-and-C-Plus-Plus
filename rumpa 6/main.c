#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,a,b[101],v,c,d,i,j,k,l,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        l=0;
        for(j=m-46;j<=m;j++)
        {
            v=j;sum=0;
            while(v!=0)
            {
                sum=sum+v%10;
                v=v/10;
            }
            if((sum+j==m))
            {
                b[l++]=j;
            }
        }
        sort(b,b+l);
        if(l==0)
        printf("0\n");
        else printf("%d\n",b[0]);
    }
    return 0;
}
}
