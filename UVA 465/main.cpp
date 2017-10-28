#include <bits/stdc++.h>

using namespace std;

int main()
{
   char s1[999999],s2[999999],c;
   long double n1,n2;
    while(cin>>s1>>c>>s2)
    {
        n1 = atof(s1);
        n2 = atof(s2);
        cout<<s1 <<" "<<c<<" "<<s2<<endl;
        if(n1>2147483647)
            cout<<"first number too big"<<endl;
        if(n2>2147483647)
            cout<<"second number too big"<<endl;
        if(c=='+' && n1+n2>2147483647)
            cout<<"result too big"<<endl;
        if(c=='*' && n1*n2>2147483647)
            cout<<"result too big"<<endl;
    }


    return 0;
}
