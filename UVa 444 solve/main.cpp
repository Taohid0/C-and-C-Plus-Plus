#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
int x,i,j,d;
char f;
string a,c,e,m;

while(getline(cin,a))
    {
    if(a[0]-'0'>=0 && a[0]-'0'<=9)
        {
        e="";
        for(i=0;i<(int)a.length();i++)
            {
            m="";
            if((a[i+1]-'0')>=3) {
                              d=((a[i+1]-'0'))*10+(a[i]-'0');
                              f=d;
                              m+=f;
                              i++;
                              }
           else{
                d=((a[i+2]-'0'))*100+((a[i+1]-'0'))*10+(a[i]-'0');
                f=d;
                m+=f;
                i+=2;
                }
            e+=m;
            }
        for(i=e.length()-1;i>=0;i--)
            {
            cout<<e[i];
            }
        }
        else {
            for(i=a.length()-1;i>=0;i--)
                {
                e="\0";
                x=a[i];
                stringstream h;
                h<<x;
                c=h.str();
                for(j=c.length()-1;j>=0;j--)
                    e+=c[j];
                cout<<e;
                }
            }
    cout<<endl;
    }

return 0;
}
