#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,st;
    vector<int>v;
    scanf("%d",&n);
    int sum = 0;
    while(n--){
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    l = v.size();
    for(int i = 0;i<l;i++){
        if(v[i]<=4){

        }
    }
    if(sum%4==0){
        printf("%d\n",sum/4);
    }
    else
        printf("%d\n",(sum/4)+1);
    return 0;
}
