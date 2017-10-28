#include <bits/stdc++.h>

using namespace std;

int main()
{         int n,num;

    while(1){
            vector<int>v;

        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(int i = 0;i<n;i++){
            scanf("%d",&num);
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        int l = v.size();
        int i=1;;
        for(vector<int>::iterator itr = v.begin();itr!=v.end();itr++){
           printf("%d",*itr);
           if(i<l){
            printf(" ");
           }
        }
        printf("\n");
    }


    return 0;
}
