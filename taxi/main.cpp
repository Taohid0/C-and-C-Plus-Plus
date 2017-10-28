#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)

#define ft first
#define se second
#define st(s) s.size();
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;

int st[100005];

int main(){

         int n,i,sum = 0;

         scanf("%d",&n);
         for(i = 0;i<n;i++){
            scanf("%d",&st[i]);
         }
         sort(st,st+i-1);
         int temp = 0;

         for(int j = 0;j<i;j++){

             if(st[i]==4){
                sum+=1;
             }
             else{
                    temp+=st[j];

             if(temp>=3 && st[j]>1){
                sum+=1;
                temp = 0;
             }
             }

         }
         if(temp>0){
            sum++;
         }
     printf("%d\n",sum);
         return 0;
}













