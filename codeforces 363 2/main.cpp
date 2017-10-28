#include <bits/stdc++.h>

using namespace std;

int main()
{
   char arr[1001][1001];


   int row,col;
   ios::sync_with_stdio(false);
   cin>>row>>col;
   for(int i =0;i<row;i++)
   {
       for(int j = 0;j<col;j++)
       {
           cin>>arr[i][j];
       }
   }


  bool flag =false;
  int r1,r2;
  r1=-1;r2=-1;
  while(1){
        r1++,r2++;
        if(r1==row || r2==col)break;

                 int j;
  for(int i = 0;i<row;i++)
  {
      for(j = 0;j<col;j++)
      {
          if(i!=r1 && j!=r2 && arr[i][j]=='*')
          {
              break;
          }
      }
      if(j==col){flag =true;break;}
  }
  if(flag){break;}
  }


   if(flag)
   {
       cout<<"YES"<<endl<<r1+1<<" "<<r2+1<<endl;
   }
   else
    cout<<"NO"<<endl;
    return 0;
}
