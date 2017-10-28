#include <bits/stdc++.h>

using namespace std;

int main()
{
    int u,v,cast=1;
    while(true){
        cin>>u>>v;
        if(!u and !v)
        {
            break;
        }
        int adjlist[105][105];
        fill(&adjlist[0][0],&adjlist[105][0],1000);


        adjlist[u][v]=1;

        while(true)
        {
            cin>>u>>v;
            if(!u and !v)
            {
                break;
            }
            adjlist[u][v]=1;
        }
        for(int i =1;i<=100;i++)
        {
            for(int j = 1;j<=100;j++)
            {
                for(int k = 1;k<=100;k++)
                {
                    if(adjlist[j][i]!=1000 and adjlist[i][k]!=1000)
                    {
                        adjlist[j][k]=min(adjlist[j][i]+adjlist[i][k],adjlist[j][k]);

                    }
                }
            }
        }
        double sum = 0.0;
        double counter=0.0;
        for(int i=1;i<=100;i++)
        {
            for(int j =1;j<=100;j++)
            {
                if(adjlist[i][j]!=1000 and i!=j)
                {
                    sum+=adjlist[i][j];
                    //cout<<sum<<endl;
                    counter++;
                }
            }
        }
        double r = (double)sum/counter;
        printf("Case %d: average length between pages = %.3f clicks\n",cast++,r);
    }
    return 0;
}
