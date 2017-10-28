#include <bits/stdc++.h>

using namespace std;

int main()
{

    int dim[8][2]={{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0}};

    int c,r,i,j,k,tx,ty,l,n;

    while(scanf("%d%d",&r,&c)==2&&r&&c)
    {


     char star[101][101]={0};


        for(i=0;i<r;i++)
          scanf("%s",star[i]);
n=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                l=1;
                if(star[i][j]=='*')
                for(l=0,k=0;k<8;k++)
                {
                    tx=i+dim[k][0];ty=j+dim[k][1];

                    if(tx>=0&&ty>=0&&tx<r&&ty<c&&star[tx][ty]=='*')
                    {

                        l++;

                    }

                }
                if(l==0)n++;
            }
        }

        printf("%d\n",n);



    }

    return 0;
}
