#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,temp;

    scanf("%d",&n);

    int c = 1,d,j = 0;
    while(n){
        temp = n%10;
        if(temp==4){
               d = 1;}
               else
                d = 2;
             j+=d*c;
             c*=2;
            n/=10;
    }

        printf("%d",j);


    return 0;
}
