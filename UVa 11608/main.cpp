#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>problems(15);
    vector<int>required(15);
    int cas;
    while(scanf("%d",&problems[0])){
           cas = 1;
        //cin>>problems[0];
        if(problems[0]<0)
        {
            break;
        }
        for(int i = 1;i<13;i++){
            cin>>problems[i];
        }
        for(int i  = 1;i<13;i++){
            cin>>required[i];
        }
        int temp = problems[0];
        printf("Case %d:\n",cas);
        for(int i  = 1;i<13;i++){

            if(temp>=required[i]){
                printf("No problem! :D \n");
                temp-=required[i];
            }
            else
                printf("No problem. :(\n");
                temp+=problems[i];
            }
            cas++;
    }
    return 0;
}
