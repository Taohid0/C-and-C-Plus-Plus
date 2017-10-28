#include <bits/stdc++.h>

using namespace std;
  vector<int>v;
int gcd (int a,int b){

              if(a<b){
                int temp = a;
                a = b;
                b = temp;
              }
              int remainder;
              while(1)
                {
                    remainder = a%b;
                    if(remainder==0)
                        return b;

                }
                a =b;
                b =remainder;
              }
int maxGCD(){
                   int max = -1;
                   for(int i = 0;i<(int)v.size();i++){
                    for(int j = 0;j<(int)v.size();j++){
                        if(gcd(v[i],v[j])>max){
                            max = gcd(v[i],v[j]);
                        }
                    }
                   }
                   return max;
}

int main()
{
    int test;
     char ch;
   cin>>test;
   int index = 0;
    while(test--){
            while(true){
         scanf("%d",&v[index++]);
        while ((ch = getchar()) == ' ');
        ungetc(ch,stdin);
         if(ch==10 || ch==-1){
            break;
         }

        }}

        cout<<maxGCD();
        while(test>1){
            cout<<endl;
        }



    return 0;
}
