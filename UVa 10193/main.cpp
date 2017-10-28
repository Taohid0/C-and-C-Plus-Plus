#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s1[100],s2[100];
    int test;
    int c=1;
    cin>>test;
    getchar();
    while(test--){
    gets(s1);
    gets(s2);
    int n1=strtol(s1,NULL,2);
    int n2 =strtol(s2,NULL,2);
    int gcd=__gcd(n1,n2);
    if(gcd!=1)
        cout<<"Pair #"<<c++<<": All you need is love!"<<endl;

    else
        cout<<"Pair #"<<c++<<": Love is not all you need!"<<endl;
    }
    return 0;
}
