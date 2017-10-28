#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,r;
   queue<int>a,b,c;
   cin>>n;
   for(int i = 1;i<=n;i++)
   {
       cin>>r;
       if(r==1)a.push(i);
       else if(r==2)b.push(i);
       else c.push(i);
   }
   int mn = min((int)a.size(),(int)b.size());
   mn = min(mn,(int)c.size());
   cout<<mn<<endl;
   while(mn--)
   {
       cout<<a.front()<<" "<<b.front()<<" "<<c.front()<<endl;
       a.pop(),b.pop(),c.pop();
   }
    return 0;
}
