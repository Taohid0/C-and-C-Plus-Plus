#include <bits/stdc++.h>

using namespace std;

int main()
{   int n;
    vector<int>v();
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
         for(vector<int>::iterator itr = v.begin();itr <n;itr++){
            cin>>itr;
         }
        for(int i = 0;i<n;i++){
            scanf("%d",&v[i]);
        }
        sort(v.begin(),v.end());

       for(vector<int>::iterator itr = v.begin();itr != v.end();itr++){
              printf("%d ",*itr);
       }
    }
    return 0;
}
