#include <iostream>
#include <memory.h>
#include <cstdio>
#include <cmath>
using namespace std;
#define MAX 10
int G[MAX],Y[MAX],R[MAX];
double dis[MAX];
bool speeds[65];
int n;
int main(){
    int cas=1;
    while (scanf("%d",&n)&&n!=-1)
    {
        int i,cnt=0,f=0;

        memset(speeds,0,sizeof(speeds));
        for (i=0;i<n;++i)
        {
            scanf("%lf %d %d %d",&dis[i],&G[i],&Y[i],&R[i]);
        }
        for (int i=30;i<=60;++i)
        {
            bool f=1;

            for (int j=0;j<n;++j)
            {
                double reachedTime=dis[j]*3600/i;

                double interval=fmod(reachedTime,(G[j]+Y[j]+R[j]));
                if(interval>G[j]+Y[j]&&interval<(G[j]+Y[j]+R[j])){
                    f=0;
                    break;
                }
            }
            if(f)speeds[i]=1;
        }
        printf("Case %d:",cas++);
        for (int i=30;i<=60;)
        {
            if(speeds[i]){
                f=1;
                int low=i,high=i;
                while (speeds[i]&&i<=60)
                {
                    high=i++;
                }
                if(cnt++)printf(",");
                if(high==low)printf(" %d",low);
                else printf(" %d-%d",low,high);
            }else{
                ++i;
            }
        }
        if(f==0)printf(" No acceptable speeds.");
        printf("\n");
    }
    return 0;
}
