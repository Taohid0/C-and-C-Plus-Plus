#include <bits/stdc++.h>


using namespace std;

int main()
{   int primary,n,m,result;

     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d",&primary);
    result  = primary;
    for(int i= 1;i<=3;i++){
        scanf("%d%d",&m,&n);
        if(m==result) {
            result = n;
        }
       else  if(n==result){
            result = m;
        }
    }
    printf("%d\n",result);
    return 0;
}
