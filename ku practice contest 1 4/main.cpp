#include<bits/stdc++.h>
using namespace std;



int to_int(string t)
{
    int ret=0;
    for(int i=0;i<(int)t.size();i++)
        ret=ret*2+t[i]-'0';
    return ret;
}


int main()
{

    int a,b,c,d,aa,bb,cc,dd;
    string str,a1,b1,c1,d1;
    int Tst;
    scanf("%d",&Tst);
    for(int case_num=1;case_num<=Tst;case_num++)
    {
         scanf("%d.%d.%d.%d",&a,&b,&c,&d);
         getchar();
         getline(cin,str);
         for(int i=0;i<(int)str.size();i++)  if(str[i]=='.')  str[i]=' ';
         stringstream ss(str);
         ss>>a1>>b1>>c1>>d1;
         aa=to_int(a1);
         bb=to_int(b1);
         cc=to_int(c1);
         dd=to_int(d1);
         if(a==aa && b==bb && c==cc && d==dd)
         {
             printf("Case %d: Yes\n",case_num);
         }
         else
            printf("Case %d: No\n",case_num);
    }
    return 0;
}
