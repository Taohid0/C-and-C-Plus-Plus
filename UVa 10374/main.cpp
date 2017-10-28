
#include<stdio.h>
#include<cstring>
#include<string>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{

    map<string,string>m;
    map<string,int>ms;
    map<int,string>mi;
    int t,i,j,k,candidate,voter,cnt[10005],high,tie;
    string party,fokir;
    char ar[100];
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        m.clear();
        ms.clear();
        mi.clear();
        memset(cnt,0,sizeof(cnt));
        high=0;
        tie=0;
        scanf("%d\n",&candidate);
        for(i=0; i<candidate; i++)
        {
            gets(ar);
            fokir=ar;
            gets(ar);
            party=ar;
            m[fokir]=party;
            mi[i]=fokir;
            ms[fokir]=i;
        }
        scanf("%d\n",&voter);
        for(i=0; i<voter; i++)
        {
            gets(ar);
            fokir=ar;
            if(ms.find(fokir)!=ms.end())
                cnt[ms[fokir]]++;
        }
        k=0;
       //printf("\n");
        for(i=0; i<candidate; i++)
        {
            if(cnt[i]>k)
            {

                k=cnt[i];
                high=i;
            }
        }

       //printf("\n");

        for(i=0; i<candidate; i++)
            if(k==cnt[i] && i!=high)
                tie=1;

        if(tie==1)
            printf("tie\n");
        else cout<<m[mi[high]]<<endl;
        if(j<t-1)
            printf("\n");
    }
    return 0;
}
