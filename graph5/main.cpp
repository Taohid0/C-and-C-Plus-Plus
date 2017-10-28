#include <bits/stdc++.h>

using namespace std;

int main()
{
    int weight[100][100];
    int node;

    scanf("%d",&node);

    for(int i = 0;i<node;i++){
        for(int j = 0;j<node;j++){
        scanf("%d",&weight[i][j]);
        }
    }
    for(int i =0;i<node;i++){
        for(int j = 0;j<node;j++){
            printf("%d ",weight[i][j]);
        }
        printf("\n");
    }
    return 0;
}
