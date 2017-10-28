#include <bits/stdc++.h>


int main()
{
    int test,x,y,radius;
    double length;
    scanf("%d",&test);

    while(test--)
    {
        scanf("%d%d%d",&x,&y,&radius);
        length = sqrt(pow(x,2)+pow(y,2));
        printf("%.2lf %.2lf\n",radius-length,radius+length);
    }
    return 0;
}
