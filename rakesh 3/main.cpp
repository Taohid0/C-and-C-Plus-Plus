#include <stdio.h>

int main()
{
    int t, x, y, z, i=0;
    scanf("%d",&t);
    while(t--){
        i++;
        scanf("%d%d%d",&x,&y,&z);
        if(x>y){
            if(x>z){
                printf("Case %d:%d\n",i,x);
            }
            else{
                printf("Case %d:%d\n",i,z);
            }
        }
        else{
            if(y>z){
                printf("Case %d:%d\n",i,y);
            }
            else{
                printf("Case %d:%d\n",i,z);
            }
        }
    }
    return 0;
}
