#include <bits/stdc++.h>

int main()
{
    int i,r,radius,test,left_upx,left_upy,right_upx,right_upy,left_downx,left_downy,right_downx,right_downy,length;
    scanf("%d",&test);

    for(i=1;i<=test;i++)
    {
        scanf("%d",&r);
        radius = r*5;
        left_upx = - (radius*.45);
        right_upx = radius*.55;
        length = -left_upx+right_upx;
        left_upy = (length*30)/100;
        right_upy = (length*30)/100;
        left_downx = - (radius*.45);
        right_downx = radius*.55;
        left_downy = -(length*30)/100;
        right_downy = -(length*30)/100;


        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",i,left_upx,left_upy,right_upx,right_upy,
                                                        right_downx,right_downy,left_downx,left_downy );
    }
    return 0;
}
