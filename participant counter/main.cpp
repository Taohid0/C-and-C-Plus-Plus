#include <bits/stdc++.h>\

using namespace std;

int main()
{   int contestant[1000];

    int k,n;

    scanf("%d%d",&n,&k);
     for(int i = 0;i<n;i++){
        scanf("%d",&contestant[i]);
     }
     int temp = contestant[k-1];

     int sum = 0;
     for(int i = 0;i<n;i++){
        if(contestant[i] && (contestant[i]>=temp)){
            sum++;
        }
     }
     printf("%d\n",sum);

    return 0;
}
