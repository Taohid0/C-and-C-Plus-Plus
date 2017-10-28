#include <bits/stdc++.h>

using namespace std;
int main()
{
    string num,temp;
long long s,bb,cc,d,l;
while(cin>>num)
{
    sort(num.begin(),num.end());
    temp=num;
     if(temp[0]=='0')
        {
            for(int i=1;i<temp.size();i++)
            {
                if(temp[i]!='0')
                {
                    swap(temp[0],temp[i]);
                    break;
                }
            }
        }
    reverse(num.begin(),num.end());
    bb=atoll(num.c_str());
    cc=atoll(temp.c_str());
    if(bb<cc)
    swap(bb,cc);
    s=bb-cc;
    d=s/9;
    printf("%lld - %lld = %lld = 9 * %lld\n",bb,cc,s,d);
}
return 0;
}
