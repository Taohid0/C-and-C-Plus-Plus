#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);cin.tie(0);
   int n;
   char s[1000];
   scanf("%d",&n);

   for(int i = 1;i<=n;i++)
   {
       scanf("%s",s);
       int sg = strlen(s);
       bool test= true;
       for(int j = 0;j<sg/2+1;j++)
       {
           if(s[j]!=s[sg-1-j])
           {
               test = false;
               break;
           }
       }
       if(test)printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
   }
    return 0;
}
