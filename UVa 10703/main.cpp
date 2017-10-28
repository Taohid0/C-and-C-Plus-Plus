#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long h,w,l,x1,x2,y1,y2;
    int arr[505][505],visited=0;
    while(true)
    {
        cin>>h>>w>>l;
        if(!h and !w and !l)break;
        long long m=0;
        visited++;
        while(l--)
        {
            cin>>x1>>y1>>x2>>y2;
            if(x1>x2)swap(x1,x2);
            if(y1>y2)swap(y1,y2);
            for(int i=x1;i<=x2;i++)
            {
                for(int j=y1;j<=y2;j++)
                {

                    arr[i][j]=visited;



                }
            }
        }
        m=0;
        for(int i=1;i<=h;i++)
            for(int j=1;j<=w;j++)
        {
            if(arr[i][j]!=visited)m++;
        }
        if(m==0)
            cout<<"There is no empty spots."<<endl;
        else if(m==1)
            cout<<"There is one empty spot."<<endl;
        else
            cout<<"There are "<<m<<" empty spots."<<endl;
    }
    return 0;
}
