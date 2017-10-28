#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int sort(const void *x, const void *y){
    int e=*(int*)x;
    int e1=*(int*)y;
    if(e>e1)
        return 1;
    else
        return -1;
}

double abss(double i)
{
return i>0 ?i:(-1.0*i);
}

int main()
{
    int n,c,s,sum,t,i,first,last,mass[15];
    double average,balnce;
    t=0;
    while(scanf("%d %d",&c,&s)==2)
    {
        balnce=0;
        t++;
        sum=0;
        for(i=0;i<15;i++)
            mass[i]=100000000;
        for(i=0;i<s;i++)
        {
            scanf("%d",&mass[i]);
            sum+=mass[i];
        }
        average=(sum*1.0)/c;

        for(i=s;i<2*c;i++)
            mass[i]=0;
        qsort(mass, 2*c, sizeof(int), sort);
//        for(int i=0;i<c*2;i++)
//        {
//            cout<<mass[i]<< " ";
//        }
        printf("Set #%d\n",t);
        for(i=0;i<c;i++)
        {
            first=mass[i];
            last=mass[2*c-i-1];
            if(first==0&&last!=0)
                printf(" %d: %d\n",i,last);
            else if(first==0&&last==0)
                printf(" %d:\n",i);
            else
                printf(" %d: %d %d\n",i,first,last);
            balnce+=abss(((first*1.0+last*1.0)-average))*1.0;
        }
        printf("IMBALANCE = %0.5f\n\n",balnce);

    }


    return 0;
}
