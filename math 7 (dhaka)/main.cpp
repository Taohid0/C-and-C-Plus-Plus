#include <bits/stdc++.h>

using namespace std;

int main()
{  int i,j,k,n,length[10005];
    scanf("%d",&n);
    bool found = false;
    for(int i = 1;i<=n;i++){
        scanf("%d",&length[i]);
    }
    for( i = 1;i<=n && !found;i++){

        for( j = 1;j<=n&& !found;j++){


            for( k = 1;k<=n&& !found;k++){

                if((length[i] ==length[j]+length[k]) && (i!=j && i!=k && j!=k)){
                    found = true;
                }}}
    }if(found==true){
   /* vector<int>s;
    s.push_back(i-1);
    s.push_back(j-1);
    s.push_back(k-1);
    sort(s.begin(),s.end(),greater<int>());

    for(vector<int>::iterator itr =s.begin();itr!=s.end();itr++){*/

        printf("%d %d %d",i-1,j-1,k-1);}



    else
        printf("-1\n");
    return 0;
}
