#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long long sum=0,n;
    cin>>n;
    while(n--)
    {

        cin>>s;
        if(s=="Tetrahedron")sum+=4;
        else if(s=="Cube")sum+=6;
        else if(s=="Octahedron")sum+=8;
        else if(s=="Dodecahedron")sum+=12;
        else if(s=="Icosahedron")sum+=20;
    }
    cout<<sum<<endl;
    return 0;
}
