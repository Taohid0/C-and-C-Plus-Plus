#include <bits/stdc++.h>

using namespace std;

int main()
{
   int m,h1,h2,x1,x2,y1,y2,a1,a2;
   cin>>m>>h1>>a1>>x1>>y1>>h2>>a2>>x2>>y2;
   int sec = 0;
   while(1){
    int len1 = (x1*h1 + y1)%m;
    int len2 = (x2*h2+y2)%m;
    sec++;
    if(len1>=a1 && len2>=a2)
        break;
   }
   cout<<sec<<endl;


    return 0;
}
