#include<iostream>
using namespace std;

int i;
int j;

int fact(int n)
{
    int fact=1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}


long perm(int a,int s)
{
   if(a<0||s<0||a<s) return 0;
   int p=1;

   return fact(a)/fact(a-s);
}

int main()
{
    int z,x;
    cin>>z;

    for(i=-1;i<=z;i++){
        for(j=-1;j<=z+1;j++){
            cout<<" "<<perm(i,j);
        }
        cout<<endl;
    }

}
