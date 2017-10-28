#include <bits/stdc++.h>


using namespace std;

int main()
{   int m,n;

    scanf("%d%d",&m,&n);
    int tv[1001];
    int sum= 0,price;
    for(int i = 0;i<m;i++){
            scanf("%d",&price);

        tv[i] = price;
    }
    sort(tv,tv+m);

   for(int i = 0;i<n;i++){
    if(tv[i]<0){
        sum+=-1*tv[i];
    }
   }
    printf("%d\n",sum);
    return 0;
}
