#include <bits/stdc++.h>

using namespace std;

int main()
{     int n,weight[10001],result1,result2;

    scanf("%d",&n);
    int min = 10000;


    for(int i = 0;i<n;i++){
        scanf("%d",&weight[i]);
    }
    for(int i = 0;i<n-1;i++){
        if(abs(weight[i]-weight[i+1])<min){
            result1 = i+1;
            result2 = i+2;
            min = abs(weight[i]  - weight[i+1]);
        }
    }
    if((abs(weight[n-1]-weight[0]))<min){
    result1 = n;
    result2 = 1;
    }
    printf("%d %d\n",result1,result2);
    return 0;
}
