#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,d,count = 0;
    int soldier[1000];

    scanf("%d%d",&n,&d);
    for(int i = 0;i<n;i++){
    scanf("%d",&soldier[i]);
    }
    sort(soldier,soldier+n);
    for(int i =0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
        if(abs(soldier[i]-soldier[j])<=d){
            count++;
            if(abs(soldier[i]-soldier[j])>d){
               break;}
        }
    }}
    printf("%d\n",count*2);

    return 0;
}
